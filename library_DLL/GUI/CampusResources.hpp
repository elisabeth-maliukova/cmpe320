//
//  CampusResources.hpp
//  ClassDeclarations
//
//  Created by Lizzy Klosa on 2021-11-23.
//

#ifndef CampusResources_hpp
#define CampusResources_hpp

#include <stdio.h>
#include <string>


using namespace std;

class CampusResources {
    private:
        string resource;
        string description;
        string location;
        string contact;
        void setDescription(const string& resource);
        void setResource(const string& description);
        void setLocation(const string& location);
        void setContact(const string& contact);
        CampusResources();
        CampusResources(const string& resource, const string& description, const string& location, const string& contact);
    public:
        string getResource();
        string getDescription();
        string getLocation();
        string getContact();
};
#endif /* CampusResources_hpp */
