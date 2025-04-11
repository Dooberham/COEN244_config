//
// Created by Niall Cunningham on 2025-04-07.
//

#ifndef COEN244_CONFIG_DATASTORAGE_H
#define COEN244_CONFIG_DATASTORAGE_H


class DataStorage {


public:
    DataStorage();
    ~DataStorage();

    int *iPtr;
    float *fPtr;
    char *cPtr;
    int dSize;
};


#endif //COEN244_CONFIG_DATASTORAGE_H
