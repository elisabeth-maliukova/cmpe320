//
// Created by pabor on 2021-11-26.
//

#ifndef OLIVEACLASSES_MAPOBJECTS_H
#define OLIVEACLASSES_MAPOBJECTS_H

#endif //OLIVEACLASSES_MAPOBJECTS_H
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
