//
//  Date.hpp
//  
//
//  Created by Lizzy Klosa on 2021-11-14.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>
#include <string>
#endif /* Date_hpp */

using namespace std;

class Date {
    private:
        string minute;
        string hour;
        string day;
        string month;
        string year;
    public:
        // constructors
        Date();
        Date(const string& day, const string& month, const string& year);
        Date(const string& minute, const string& hour, const string& day, const string& month, const string& year);
        void setDate(const string& minute, const string& hour, const string& day, const string& month, const string& year);
        string getDate();

};
