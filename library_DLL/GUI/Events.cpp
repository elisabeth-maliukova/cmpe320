//
//  Events.cpp
//  
//
//  Created by Lizzy Klosa on 2021-11-14.
//

#include "Events.hpp"

Events::Events() {
    Date d;
    this->date = d;
    this->host = "";
    this->description = "";
    this->location = "";
}
Events::Events(Date date, const string& host, const string& description, const string& location) {
    this->date = date;
    this->host = host;
    this->description = description;
    this->location = location;
}

void Events::setDescription(const string& description) {
    this->description = description;
}
void Events::setHost(const string& host) {
    this->host = host;
}
void Events::setDate(Date date) {
    this->date = date;
}
void Events::setLocation(const string& location) {
    this->location = location;
}

string Events::getDescription() {
    return this->description;
}
string Events::getHost() {
    return this->host;
}
Date Events::getDate() {
    return this->date;
}
string Events::getLocation() {
    return this->location;
}
