//
// Created by Pablo Ortiz on 2021-11-14.
//
#include <string>
#include <stdlib.h>
#include <vector>

#ifndef OLIVEACLASSES_CLASSES_H
#define OLIVEACLASSES_CLASSES_H

#endif //OLIVEACLASSES_CLASSES_H
using namespace std;

class BadSearchException{
public:
    BadSearchException(const string&);
    string&what();
private:
    string message;
};

class LoadingApplicationException{
public:
    LoadingApplicationException(const string&);
    string&what();
private:
    string message;
};



