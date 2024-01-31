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

#endif /* Buildings_h */

using namespace std;

class Buildings : public MapObjects {
public:
    Buildings(string loc, string addr, string name);
    Buildings(string loc, string addr, string name, string dedication, int date);
    void setDedication(const string& dedication);
    void setDate(const int& date);
    string getDedication();
    int getDate();

private:
    string dedication;
    int date;
};

#ifndef foodLocation_h
#define foodLocation_h

using namespace std;

class foodLocation : public Buildings {
    public:
    foodLocation();
};

#endif /* foodLocation_h */

#ifndef lectureHalls_h
#define lectureHalls_h

#include <string>

using namespace std;

class lectureHalls : public Buildings {
public:
    lectureHalls();
    lectureHalls(string department);
    void setDepartment(const string& department);
    string getDepartment();
    
private:
    string department;
};

#ifndef foodLocation_h
#define foodLocation_h


class foodLocation : public Buildings {
    public:
    foodLocation(string loc, string addr, string name, string dedication, int date);
};

#endif /* foodLocation_h */

#ifndef lectureHalls_h
#define lectureHalls_h


class lectureHalls : public Buildings {
public:
    lectureHalls(string loc, string addr, string name, string dedication, int date);
    lectureHalls(string loc, string addr, string name, string dedication, int date, string department);
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
    Residence(string loc, string addr, string name, string dedication, int date);
    Residence(string loc, string addr, string name, string dedication, int date, string roomType);
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
    Libraries(string loc, string addr, string name, string dedication, int date);
};

#endif /* Libraries_h */
