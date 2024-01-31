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


busStops::busStops(const string name, const string addr, const string services) : MapObjects("none", addr, name) {
	this->services = services;
}

string busStops::getServices() {
	return this->services;
}

void busStops::setServices(string services) {
	this->services = services;
}

bikeRacks::bikeRacks() : MapObjects() {}

bikeRacks::bikeRacks(const string name, const string addr) : MapObjects("none", addr, name) {}

ChargingStations::ChargingStations() : MapObjects() {}

ChargingStations::ChargingStations(const string name, const string addr) : MapObjects("none", addr, name) {}

