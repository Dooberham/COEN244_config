#include <iostream>
#include "DataStorage.h"
#include <fstream>
using namespace std;

int recordCounter(const string &fileName) {
    string line;
    int linecount = 0;
    ifstream inFile(fileName, ios::in);

    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }

    while (getline(inFile, line)) {
        ++linecount;
    }

    inFile.close();

    return linecount;
}

void read(const string &fileName, DataStorage* dsptr) {
    ifstream inFile(fileName, ios::in);
    string dType;
    int dSize;
    int index = 0;

    while (!inFile.eof()) {
        inFile >> dType >> dSize;

        dsptr[index].dSize = dSize;

        if (dType == "int") {
            dsptr[index].iPtr = new int[dSize];
            for (int i = 0; i< dSize; i++) {
                inFile >> dsptr[index].iPtr[i];
            }

        }
        else if (dType == "float") {
            dsptr[index].fPtr = new float[dSize];
            for (int i = 0; i < dSize; i++) {
                inFile >> dsptr[index].fPtr[i];
            }

        }
        else if (dType == "char") {
            dsptr[index].cPtr = new char[dSize];
            for (int i = 0; i < dSize; i++) {
                inFile >> dsptr[index].cPtr[i];
            }

        }
        index++;
    }
    inFile.close();
}
int main() {

    DataStorage *dsPtr = new DataStorage[recordCounter("config.txt")];

    read("config.txt", dsPtr);

    for (int i = 0; i < recordCounter("config.txt"); i++) { //Loop to print each record
        cout << "Data Type: ";
        if (dsPtr[i].iPtr != nullptr) {
            cout << "int " << endl;
            for (int j = 0; j < dsPtr[i].dSize; j++) {
                cout << dsPtr[i].iPtr[j] << " ";
            }
            cout << endl;
        }
        if (dsPtr[i].fPtr != nullptr) {
            cout << "float " << endl;
            for (int j = 0; j < dsPtr[i].dSize; j++) {
                cout << dsPtr[i].fPtr[j] << " ";
            }
            cout << endl;
        }
        if (dsPtr[i].cPtr != nullptr) {
            cout << "char " << endl;
            for (int j = 0; j < dsPtr[i].dSize; j++) {
                cout << dsPtr[i].cPtr[j] << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
