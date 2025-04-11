//
// Created by Niall Cunningham on 2025-04-07.
//

#include "DataStorage.h"

DataStorage::DataStorage() {
    iPtr = new int;
    fPtr = new float;
    cPtr = new char;
}

DataStorage::~DataStorage() {
    delete iPtr;
    delete fPtr;
    delete cPtr;
}
