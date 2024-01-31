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
<<<<<<< HEAD

    Buildings(string name, string addr);
    Buildings(string name, string addr, string dedication, int date);
=======
    Buildings();
<<<<<<< HEAD
  	Buildings(string loc, string addr, string name);
    Buildings(string loc, string addr, string name, string dedication, int date);
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
    Buildings(string name, string addr);
    Buildings(string name, string addr, string dedication, int date);
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
    void setDedication(const string& dedication);
    void setDate(const int& date);
    string getDedication();
    int getDate();

private:
    string dedication;
    int date;
};
<<<<<<< HEAD
<<<<<<< HEAD
#endif /* Buildings_h */


#ifndef FoodLocation_h
#define FoodLocation_h
class foodLocation : public Buildings {
    public:
    foodLocation(string name, string addr, string dedication, int date);
=======
=======
#endif /* Buildings_h */
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4


#ifndef FoodLocation_h
#define FoodLocation_h
class foodLocation : public Buildings {
    public:
<<<<<<< HEAD
  	foodLocation();
    foodLocation(string loc, string addr, string name, string dedication, int date);
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
    foodLocation();
    foodLocation(string name, string addr, int date, string dedication);
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
};

#endif /* foodLocation_h */

#ifndef LectureHalls_h
#define LectureHalls_h
<<<<<<< HEAD
=======

>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4

class lectureHalls : public Buildings {
public:
<<<<<<< HEAD
    lectureHalls(string name, string addr, string dedication, int date);
    lectureHalls(string name, string addr, string dedication, int date, string department);
=======
    lectureHalls();
<<<<<<< HEAD
  	lectureHalls(string loc, string addr, string name, string dedication, int date);
    lectureHalls(string loc, string addr, string name, string dedication, int date, string department);
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
    lectureHalls(string name, string addr, int date, string dedication);
    lectureHalls(string name, string addr, int date, string dedication,  string department);
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
    void setDepartment(const string& department);
    string getDepartment();

private:
    string department;
};

#endif /* lectureHalls_h */

#ifndef Residence_h
#define Residence_h
<<<<<<< HEAD
<<<<<<< HEAD
class Residence : public Buildings {
public:
    Residence(string name, string type, string dedication, int date);
    Residence(string name, string type, string dedication, int date, string roomType);
=======

class Residence : public Buildings {
public:
    Residence();
  	Residence(string loc, string addr, string name, string dedication, int date);
    Residence(string loc, string addr, string name, string dedication, int date, string roomType);
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
class Residence : public Buildings {
public:
    Residence();
    Residence(string name, string addr, int date, string dedication);
    Residence(string name, string addr, int date, string dedication,  string roomType);
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
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
<<<<<<< HEAD
<<<<<<< HEAD
    Libraries(string name, string addr, string dedication, int date);
=======
  	Libraries();
    Libraries(string loc, string addr, string name, string dedication, int date);
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
    Libraries();
    Libraries(string name, string addr, int date, string dedication);
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
};

#endif /* Libraries_h */
