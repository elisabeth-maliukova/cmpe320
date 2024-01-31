//
//  Events.hpp
//  
//
//  Created by Lizzy Klosa on 2021-11-14.
//

#ifndef Events_hpp
#define Events_hpp

#include <stdio.h>
#include "Date.hpp"

#endif /* Events_hpp */

using namespace std;

class Events {
    private:
        Date date;
        string host;
        string description;
        string location;
    
        void setDescription(const string& description);
        void setHost(const string& host);
        void setDate(Date date);
        void setLocation(const string& location);
    
        // Constructors
        Events();
        Events(Date date, const string& host, const string& description, const string& location);
    public:
        string getDescription();
        string getHost();
        Date getDate();
        string getLocation();
};
