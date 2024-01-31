//
// Created by pabor on 2021-11-26.
//

#ifndef MAP_OBJECTS_H
#define MAP_OBJECTS_H
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

class MapObjects{
public:
    MapObjects();
    MapObjects(string loc,string addr,string name);//constructor
    string getLocation();
    string getAddress();
    string getName();
    void setLocation(string location);
    void setAddress(string address);
    void setName(string name);

private:
    string location;
    string address;
    string name;
};

#endif
