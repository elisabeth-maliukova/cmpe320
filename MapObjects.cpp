//
// Created by pabor on 2021-11-26.
//

#include "MapObjects.h"
MapObjects::MapObjects() {
    this->location="";
    this->address="";
    this->name="";
}

MapObjects::MapObjects(string loc,string addr,string name) {
    this->location=loc;
    this->address=addr;
    this->name=name;
}

string MapObjects::getLocation() {
    return this->location;
}
string MapObjects::getAddress() {
    return this->address;
}
string MapObjects::getName() {
    return this->name;
}
void MapObjects::setLocation(string location) {
    this->location=location;
}
void MapObjects::setAddress(string address) {
    this->address=address;
}
void MapObjects::setName(string name) {
    this->name=name;
}
