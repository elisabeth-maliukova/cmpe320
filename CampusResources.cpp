//
//  CampusResources.cpp
//  ClassDeclarations
//
//  Created by Lizzy Klosa on 2021-11-23.
//

#include "CampusResources.hpp"
#include <string>

CampusResources::CampusResources() {
    this->resource = "";
    this->description = "";
    this->location = "";
    this->contact = "";
}

CampusResources::CampusResources(const string& resource, const string& description, const string& location, const string& contact) {
    this->description = description;
    this->resource = resource;
    this->contact = contact;
    this->location = location;
}

string CampusResources::getContact() {
    return this->contact;
}
string CampusResources::getDescription() {
    return this->description;
}
string CampusResources::getLocation() {
    return this->location;
}
string CampusResources::getResource() {
    return this->resource;
}

void CampusResources::setResource(const string& resource) {
    this->resource = resource;
}
void CampusResources::setDescription(const string& description) {
    this->description = description;
}
void CampusResources::setLocation(const string& location) {
    this->location = location;
}
void CampusResources::setContact(const string& contact) {
    this->contact = contact;
}
