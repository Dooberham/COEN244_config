#include <iostream>
#include "DataStorage.h"
#include <fstream>
using namespace std;
int main() {
    string field1;
    int field2;
    int field3;
    ifstream inFile;
    inFile.open("config.txt", ios::in);
    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }
    inFile >> field1 >> field2 >> field3;

    cout << "Field 1: " << field1 << endl;
    cout << "Field 2: " << field2 << endl;
    cout << "Field 3: " << field3 << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.