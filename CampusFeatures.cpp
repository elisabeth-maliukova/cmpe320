//
//  CampusFeatures.cpp
//

#include "CampusFeatures.hpp"
#include <string>
#include <stdio.h>

busStops::busStops() : MapObjects() {
	this->type = type;
	this->services = services;
}

busStops::busStops(const string loc, const string addr, const string name, const string type, const string services) : MapObjects(loc, addr, name) {
	this->type = type;
	this->services = services;
}

string busStops::getType() {
	return this->type;
}

void busStops::setType(string type) {
	this->type = type;
}

string busStops::getServices() {
	return this->services;
}

void busStops::setServices(string services) {
	this->services = services;
}

bikeRacks::bikeRacks() : MapObjects() {}

bikeRacks::bikeRacks(const string loc, const string addr, const string name) : MapObjects(loc, addr, name) {}

ChargingStations::ChargingStations() : MapObjects() {}

ChargingStations::ChargingStations(const string loc, const string addr, const string name) : MapObjects(loc, addr, name) {}

