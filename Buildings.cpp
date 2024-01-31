//
//  Buildings.cpp
//


#include "Buildings.h"
#include <string>
#include <stdio.h>

using namespace std;

//  buildings
<<<<<<< HEAD
<<<<<<< HEAD
Buildings::Buildings(string name, string addr) : MapObjects ("none", addr, name) {
=======
Buildings::Buildings() : MapObjects () {
    this -> dedication = "";
    this -> date = 0;
}

Buildings::Buildings(string loc, string addr, string name) : MapObjects (loc, addr, name) {
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======

Buildings::Buildings() : MapObjects() {
    this->dedication = "";
    this->date = 0;
}

Buildings::Buildings(string name, string addr) : MapObjects ("none", addr, name) {
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
    this -> dedication = "";
    this -> date = 0;
}

Buildings::Buildings(string name, string addr, string dedication, int date) : MapObjects ("none", addr, name) {
    this -> dedication = dedication;
    this -> date = date;
}


void Buildings::setDedication(const string& dedication) {
    this -> dedication = dedication;
}

void Buildings::setDate(const int& date) {
    this -> date = date;
}

string Buildings::getDedication() {
    return this -> dedication;
}


int Buildings::getDate() {
    return this -> date;
}

//  foodLocations
<<<<<<< HEAD
<<<<<<< HEAD
foodLocation::foodLocation(string name, string addr, string dedication, int date) : Buildings(name, addr, dedication, date) {}

//  lectureHalls
lectureHalls::lectureHalls(string name, string addr, string dedication, int date) : Buildings(name, addr, dedication, date) {
=======
=======
foodLocation::foodLocation(string name, string addr, int date, string dedication ) : Buildings(name, addr, dedication, date) {}
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
foodLocation::foodLocation() : Buildings() {}


//  lectureHalls
lectureHalls::lectureHalls() : Buildings() {
    this->department = "";
}
<<<<<<< HEAD

lectureHalls::lectureHalls(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
    this -> department = "";
}

lectureHalls::lectureHalls(string name, string addr, string dedication, int date, string department) : Buildings(name, addr, dedication, date) {
=======
lectureHalls::lectureHalls(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {
    this -> department = "";
}

lectureHalls::lectureHalls(string name, string addr, int date, string dedication, string department) : Buildings(name, addr, dedication, date) {
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
    this -> department = department;
}

void lectureHalls::setDepartment(const string& department) {
    this -> department = department;
}

string lectureHalls::getDepartment() {
    return this -> department;
}

//  Residence
<<<<<<< HEAD
Residence::Residence(string name, string addr, string dedication, int date) : Buildings(name, addr, dedication, date) {
=======
Residence::Residence() : Buildings() {
    this->roomType = "";
}

<<<<<<< HEAD
Residence::Residence(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
    this -> roomType = "";
}

Residence::Residence(string name, string addr, string dedication, int date, string roomType) : Buildings(name, addr, dedication, date) {
=======
Residence::Residence(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {
    this -> roomType = "";
}

Residence::Residence(string name, string addr, int date, string dedication, string roomType) : Buildings(name, addr, dedication, date) {
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4
    this -> roomType = roomType;
}

void Residence::setRoomType(const string& roomType) {
    this -> roomType = roomType;
}

string Residence::getRoomType() {
    return this -> roomType;
}

// Libraries
<<<<<<< HEAD
Libraries::Libraries(string name, string addr, string dedication, int date) : Buildings(name, addr, dedication, date) {}
=======
Libraries::Libraries() : Buildings() {}
Libraries::Libraries(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {}


<<<<<<< HEAD
Libraries::Libraries(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {}
>>>>>>> a95c893229830aa94e28f9f2f660f7c63630b000
=======
>>>>>>> 69cbb821d52de8ae0775fe69d748377f49d665c4

