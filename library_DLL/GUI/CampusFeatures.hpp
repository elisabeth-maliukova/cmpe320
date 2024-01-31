//
//  CampusFeatures.hpp
//

#ifndef CampusFeatures_hpp
#define CampusFeatures_hpp

#include <stdio.h>
#include <string>
#include "MapObjects.h"

#endif /* CampusFeatures_hpp */

using namespace std;

#ifndef BUSSTOPS_H_
#define BUSSTOPS_H_

class busStops : public MapObjects {
	private:
	string type;
	string services;

	public:

	void setServices(const string services);

	string getServices();
	busStops();
	busStops(const string name, const string addr, const string services);

};

#endif /* BUSSTOPS_H_ */


#ifndef BIKERACKS_H_
#define BIKERACKS_H_

class bikeRacks : public MapObjects {
	public:
	bikeRacks();
	bikeRacks(const string name, const string addr);
};

#endif /* BIKERACKS_H_ */


#ifndef CHARGINGSTATIONS_H_
#define CHARGINGSTATIONS_H_

class ChargingStations : public MapObjects {
	public:
	ChargingStations();
	ChargingStations(const string name, const string addr);
};

#endif /* CHARGINGSTATIONS_H_ */


//class CampusFeatures {
//    private:
//        string description;
//
//    public:
//        string getDescription();
//        void setDescription(const string& description);
//        CampusFeatures();
//        CampusFeatures(const string& description);
//};

