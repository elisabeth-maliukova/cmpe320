/*
*   DataLoadIn.h
* 
*	Author: Matthew Timpson
* 
* 
*  DataLoadIn Header file for CMPE320 Group project.  
   It's purpose is to read data from one or multiple files and 
   save that data to internal code.
*/


#pragma once

#include <string>
#include <vector>
#include <array>

#include "Buildings.h"
#include "CampusFeatures.hpp"
#include "CampusResources.hpp"
#include "FAQ.h"


using namespace std;
//
// The source filename for all the different data types is hard coded.
const string BUILDING_SOURCE("buildings.csv");
const string LECTUREHALL_SOURCE("lectureHalls.csv");
const string LIBRARIES_SOURCE("libraries.csv");
const string RESIDENCES_SOURCE("residences.csv");


// Hardcoded Campus features source files
const string CAMPUSFEATURES_SOURCE("campusFeatures.csv");
const string BUSSTOPS_SOURCE("busStops.csv");
const string BIKERACKS_SOURCE("bikeRacks.csv");
const string CHARGINGSTATIONS_SOURCE("chargingStations.csv");


// Hardcoded Food Locations source file
const string FOODLOCATIONS_SOURCE("foodLocations.csv");

// Hardcoded FAQ source file
const string FAQ_SOURCE("FAQ.csv");

// The preprogrammed size of all programmed object type arrays.

//Buildings
const int LECTUREHALLS_SIZE = 27;
const int LIBRARIES_SIZE = 4;
const int RESIDENCES_SIZE = 12;

//Campus Features
const int BUSSTOPS_SIZE = 5;
const int BIKERACKS_SIZE = 25;
const int CHARGINGSTATION_SIZE = 6;

//Food Locations
const int FOODLOCATION_SIZE = 13;

//FAQs
const int FAQ_SIZE = 10;


// The exception that is thrown if the source file cannot be read, or
// if the saved file cannot be created.
class FileException {
public:
	FileException(const string&);
	string what() const;
private:
	string message;
};


// The class that loads in the campusFeatures file and stores the data within multiple arrays for later access.
class campusFeaturesArray{
public:
	campusFeaturesArray();								// An empty constructor.
	void initialize();									// Loads the campusFeatures array contents from the source file into the allFeatures array.
	busStops BusStopLoad(int) const;					// Returns the requested Bus Stop object. Index value inputs.
	bikeRacks BikeRackLoad(int) const;					// Returns the requested Bike Rack object. Index value inputs.
	ChargingStations ChargingStationLoad(int) const;	// Returns the requested Charging Station type object.  Index value Inputs.
private:
	int sourceSizeCF;						// The number of lines in the source file.
	busStops allBusStops[BUSSTOPS_SIZE];					// The array containing all Bus Stop data and objects.
	int BusStopsSize;						// The number of Bus Stops within the array.
	bikeRacks allBikeRacks[BIKERACKS_SIZE];				// The array containing all Bike Rack data and objects.
	int BikeRacksSize;						// The number of Bike Racks within the array.
	ChargingStations allChargingStations[CHARGINGSTATION_SIZE];	// The array containing all charging station data and objects.
	int ChargingStationsSize;				// The number of Charging stations within the array.
};

// The class that loads in the buildings file and stores the data within multiple arrays for later access.
class buildingsArray {
public:
	buildingsArray();							// An empty constructor.
	void initialize();							// Loads the campusFeatures array contents from the source file into the allFeatures array.
	Residence ResidenceLoad(int) const;			// Returns the requested Bus Stop object. Index value inputs.
	lectureHalls LectureHallLoad(int) const;		// Returns the requested Bike Rack object. Index value inputs.
	Libraries LibraryLoad(int) const;				// Returns the requested Charging Station type object.  Index value Inputs.
private:
	int sourceSizeB;							// The number of lines in the source file.
	Residence allResidences[RESIDENCES_SIZE];				// The array containing all Residence data and objects.
	int ResidencesSize;						// The number of Residence objects within the allResidences array.
	lectureHalls allLectureHalls[LECTUREHALLS_SIZE];			// The array containing all Lecture Hall data and objects.
	int LectureHallsSize;					// The number of Lecture Halls within the allLectureHall array.
	Libraries allLibraries[LIBRARIES_SIZE];				// The array containing all Library data and objects.
	int LibrariesSize;						// The number of Charging stations within the allLibrariesarray.
};

// The class that loads in the foodLocations file and stores the data within an array for later access.
class foodLocationsArray {
public:
	foodLocationsArray();							// An empty constructor.
	void initialize();								// Loads the foodlocation array contents from the source file into the allFeatures array.
	foodLocation foodLocationLoad(int) const;		// Returns the requested foodlocation object. Index value inputs.
private:
	int sourceSizeFL;								// The number of lines in the source file.
	foodLocation allFoodLocations[FOODLOCATION_SIZE];				// The array containing all FoodLocation data and objects.
	int FoodLocationsSize;							// The number of foodlocation objects within the allResidences array.
};

class FAQarray {
public:
	FAQarray();										// An empty constructor.
	void initialize();								// Loads the FAQ array contents from the source file into the allFeatures array.
	FAQ FAQLoad(int) const;							// Returns the requested FAQ object. Index value inputs.
private:
	int sourceSizeFAQ;								// The number of lines in the source file.
	FAQ allFAQs[FAQ_SIZE];									// The array containing all FAQ data and objects.
	int FAQSize;									// The number of FAQ objects within the allFAQs array.
};
