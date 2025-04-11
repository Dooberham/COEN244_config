//
// Created by Niall Cunningham on 2025-04-07.
//

#include "DataStorage.h"

DataStorage::DataStorage() {
    iPtr = nullptr;
    fPtr = nullptr;
    cPtr = nullptr;
}

DataStorage::~DataStorage() {
    delete iPtr;
    delete fPtr;
    delete cPtr;
}
