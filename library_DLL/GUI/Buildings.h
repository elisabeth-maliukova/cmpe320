//
//  Buildings.h
//  Olivea
//
//  Created by Aidan Turnbull on 2021-11-16.
//

#ifndef Buildings_h
#define Buildings_h




#include <stdio.h>
#include <string>
#include "MapObjects.h"

using namespace std;

class Buildings : public MapObjects {
public:
    Buildings();
    Buildings(string name, string addr);
    Buildings(string name, string addr, string dedication, int date);
    void setDedication(const string& dedication);
    void setDate(const int& date);
    string getDedication();
    int getDate();

private:
    string dedication;
    int date;
};
#endif /* Buildings_h */


#ifndef FoodLocation_h
#define FoodLocation_h
class foodLocation : public Buildings {
    public:
    foodLocation();
    foodLocation(string name, string addr, int date, string dedication);
};

#endif /* foodLocation_h */

#ifndef LectureHalls_h
#define LectureHalls_h


class lectureHalls : public Buildings {
public:
    lectureHalls();
    lectureHalls(string name, string addr, int date, string dedication);
    lectureHalls(string name, string addr, int date, string dedication,  string department);
    void setDepartment(const string& department);
    string getDepartment();

private:
    string department;
};

#endif /* lectureHalls_h */

#ifndef Residence_h
#define Residence_h
class Residence : public Buildings {
public:
    Residence();
    Residence(string name, string addr, int date, string dedication);
    Residence(string name, string addr, int date, string dedication,  string roomType);
    void setRoomType(const string& roomType);
    string getRoomType();

private:
    string roomType;
};

#endif /* Residence_h */

#ifndef Libraries_h
#define Libraries_h

class Libraries : public Buildings {
    public:
    Libraries();
    Libraries(string name, string addr, int date, string dedication);
};

#endif /* Libraries_h */
