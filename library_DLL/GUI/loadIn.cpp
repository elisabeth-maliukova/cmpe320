/*
*   DataLoadIn.cpp
*
*	Author: Matthew Timpson
*
*
*  DataLoadIn Header file for CMPE320 Group project.
   It's purpose is to read data from one or multiple files and
   save that data to internal code.
*/



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <time.h>
#include <array>

#include "loadin.h"

#include "Buildings.h"
#include "CampusFeatures.hpp"
#include "CampusResources.hpp"
#include "FAQ.h"

using namespace std;

FileException::FileException(const string& m) : message(m) {}
string FileException::what() const { return message; }


campusFeaturesArray::campusFeaturesArray(){
	int busStopsSIZE = BUSSTOPS_SIZE;
	busStops allBusStops[BUSSTOPS_SIZE];
	int bikeRacksSize = BIKERACKS_SIZE;
	bikeRacks allBikeRacks[BIKERACKS_SIZE];
	int chargingStationSize = CHARGINGSTATION_SIZE;
	ChargingStations allChargingStations[CHARGINGSTATION_SIZE];
	int sourceSizeCF = busStopsSIZE + bikeRacksSize + chargingStationSize;
} // end constructor

void campusFeaturesArray::initialize() {
	
	//Bus stops data read in code

	ifstream sf(BUSSTOPS_SOURCE);

	if (!sf.is_open()) {
		throw FileException("Input source file: " + BUSSTOPS_SOURCE + " cannot be read.");
		return;
	}

	string BSname;
	string BSaddress;
	string BStype;
	string BSServices;

	//index value of input data
	int index = 0;

	while (sf.good()) {

		getline(sf, BSname, ',');
		getline(sf, BSaddress, ',');
		getline(sf, BStype, ',');
		getline(sf, BSServices, '\n');

		//BSServices parsing code  NEEDS WRITING

		this -> allBusStops[index] = busStops(BSname, BSaddress, BSServices);

		index++;
	}

	sf.close();//closing bus stops source file

	//Bike rack data read in code

	ifstream sf2(BIKERACKS_SOURCE);

	if (!sf2.is_open()) {
		throw FileException("Input source file: " + BIKERACKS_SOURCE + " cannot be read.");
		return;
	}

	string BRBuilding;
	string BRAddress;

	//index value of input data
	index = 0;

	while (sf2.good()) {

		getline(sf2, BRBuilding, ',');
		getline(sf2, BRAddress, '\n');

		this->allBikeRacks[index] = bikeRacks(BRBuilding, BRAddress);

		index++;
	}

	sf2.close();//closing bike racks source file

	//Charging station data read in

	ifstream sf3(CHARGINGSTATIONS_SOURCE);

	if (!sf3.is_open()) {
		throw FileException("Input source file: " + CHARGINGSTATIONS_SOURCE + " cannot be read.");
		return;
	}

	string CSName;
	string CSAddress;

	// reset index value of input data
	index = 0;

	while (sf3.good()) {

		getline(sf3, CSName, ',');
		getline(sf3, CSAddress, '\n');

		this -> allChargingStations[index] = ChargingStations(CSName, CSAddress);

		index++;
	}

	sf3.close();//closing charging station source file

} // end initialization of Campus Features data



busStops campusFeaturesArray::BusStopLoad(int indexValue) const {
	return allBusStops[indexValue];
}

bikeRacks campusFeaturesArray::BikeRackLoad(int indexValue) const {
	return allBikeRacks[indexValue];
}

ChargingStations campusFeaturesArray::ChargingStationLoad(int indexValue) const {
	return allChargingStations[indexValue];
}

// START OF BUILDINGSARRAY FUNCTIONS

buildingsArray::buildingsArray() {							
	Residence allResidences[RESIDENCES_SIZE];
	int ResidencesSize = RESIDENCES_SIZE;
	lectureHalls allLectureHalls[LECTUREHALLS_SIZE];
	int LectureHallsSize = LECTUREHALLS_SIZE;
	Libraries allLibraries[LIBRARIES_SIZE];
	int LibrariesSize = LIBRARIES_SIZE;
	int sourceSizeB = ResidencesSize + LectureHallsSize + LibrariesSize;
} // end constructor



void buildingsArray::initialize() {

	//Residence data read in code

	ifstream sf(RESIDENCES_SOURCE);

	if (!sf.is_open()) {
		throw FileException("Input source file: " + RESIDENCES_SOURCE + " cannot be read.");
		return;
	}

	string ResidenceName;
	string ResidencesAddress;
	string ResidenceDate;
	string ResidenceDedication;
	string ResidenceType;

	//reset index value of input data
	int index = 0;
	Residence res;
	while (index< RESIDENCES_SIZE) {

		getline(sf, ResidenceName, ',');
		getline(sf, ResidencesAddress, ',');
		getline(sf, ResidenceDate, ',');
		getline(sf, ResidenceDedication, ',');
		getline(sf, ResidenceType, '\n');

		res = Residence(ResidenceName, ResidencesAddress, stoi(ResidenceDate), ResidenceDedication, ResidenceType);
		this->allResidences[index] = res;

		index++;
	};

	sf.close();//closing Residence source file

	//LectureHall data read in code

	ifstream sf2(LECTUREHALL_SOURCE);

	if (!sf2.is_open()) {
		throw FileException("Input source file: " + LECTUREHALL_SOURCE + " cannot be read.");
		return;
	};

	string LHName;
	string LHAddress;
	string LHDate;
	string LHDedication;
	string LHFaculty;

	//reset index value of input data
	index = 0;

	while (index< LECTUREHALLS_SIZE) {

		getline(sf2, LHName, ',');
		getline(sf2, LHAddress, ',');
		getline(sf2, LHDate, ',');
		getline(sf2, LHDedication, ',');
		getline(sf2, LHFaculty, '\n');
		int date2 = stoi(LHDate);
		this -> allLectureHalls[index] = lectureHalls(LHName, LHAddress, date2, LHDedication, LHFaculty);

		index++;
	};

	sf2.close();//closing Lecture Hall source file

	//Library data read in

	ifstream sf3(LIBRARIES_SOURCE);

	if (!sf3.is_open()) {
		throw FileException("Input source file: " + LIBRARIES_SOURCE + " cannot be read.");
		return;
	};

	string LibName;
	string LibAddress;
	string LibDate;
	string LibDedication;
	string LibFaculty;

	//reset index value of input data
	index = 0;

	while (index< LIBRARIES_SIZE) {

		getline(sf3, LibName, ',');
		getline(sf3, LibAddress, ',');
		getline(sf3, LibDate, ',');
		getline(sf3, LibDedication, '\n');
		int date3 = stoi(LibDate);
		this -> allLibraries[index] = Libraries(LibName, LibAddress, date3, LibDedication);

		index++;
	};

	sf3.close();//closing Libraries source file

} // end initialization of Building data

Residence buildingsArray::ResidenceLoad(int index) const {
	return allResidences[index];
}
lectureHalls buildingsArray::LectureHallLoad(int index) const {
	return allLectureHalls[index];
}
Libraries buildingsArray::LibraryLoad(int index) const {
	return allLibraries[index];
}


// BEGINING INITIALIZATION OF FOOD LOCATION DATA

foodLocationsArray::foodLocationsArray() {
	int foodLocationsSize = FOODLOCATION_SIZE;
	foodLocation allfoodLocations[FOODLOCATION_SIZE];
	sourceSizeFL = foodLocationsSize;
} // end constructor

void foodLocationsArray::initialize() {

	//Residence data read in code

	ifstream sf(FOODLOCATIONS_SOURCE);

	if (!sf.is_open()) {
		throw FileException("Input source file: " + FOODLOCATIONS_SOURCE + " cannot be read.");
		return;
	}

	string FLName;
	string FLAddress;
	string FLDate;
	string FLDedication;

	//reset index value of input data
	int index = 0;

	while (sf.good()) {

		getline(sf, FLName, ',');
		getline(sf, FLAddress, ',');
		getline(sf, FLDate, ',');
		getline(sf, FLDedication, '\n');

		this -> allFoodLocations[index] = foodLocation(FLName, FLAddress, stoi(FLDate), FLDedication);

		index++;
	};

	sf.close();//closing food location source file

} // end initialization of foodLocation data

foodLocation foodLocationsArray::foodLocationLoad(int index) const {
	return allFoodLocations[index];
}//end load function


//BEGGINING INITIALIZATION OF FAQ DATA
/*

FAQarray::FAQarray() {
	int sourceSizeFAQ = FAQ_SIZE;
	FAQ allFAQs[FAQ_SIZE];
	sourceSizeFAQ = sourceSizeFAQ;
} // end constructor

FAQ FAQarray::FAQLoad(int index) const {
	return allFAQs[index];
}//end load function

void FAQarray::initialize() {

	//Residence data read in code

	ifstream sf(FAQ_SOURCE);

	if (!sf.is_open()) {
		throw FileException("Input source file: " + FAQ_SOURCE + " cannot be read.");
		return;
	}

	string FAQquestion;
	string FAQanswer;

	//reset index value of input data
	int index = 0;

	while (sf.good()) {

		getline(sf, FAQquestion, '|');
		getline(sf, FAQanswer, '\n');

		this->allFAQs[index] = FAQ(FAQquestion, FAQanswer);

		index++;
	};

	sf.close();//closing food location source file

} // end initialization of foodLocation data
*/