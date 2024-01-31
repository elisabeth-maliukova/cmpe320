//
//  Buildings.cpp
//


#include "Buildings.h"
#include <string>
#include <stdio.h>

using namespace std;

//  buildings

Buildings::Buildings() : MapObjects() {
    this->dedication = "";
    this->date = 0;
}

Buildings::Buildings(string name, string addr) : MapObjects ("none", addr, name) {
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
foodLocation::foodLocation(string name, string addr, int date, string dedication ) : Buildings(name, addr, dedication, date) {}
foodLocation::foodLocation() : Buildings() {}


//  lectureHalls
lectureHalls::lectureHalls() : Buildings() {
    this->department = "";
}
lectureHalls::lectureHalls(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {
    this -> department = "";
}

lectureHalls::lectureHalls(string name, string addr, int date, string dedication, string department) : Buildings(name, addr, dedication, date) {
    this -> department = department;
}

void lectureHalls::setDepartment(const string& department) {
    this -> department = department;
}

string lectureHalls::getDepartment() {
    return this -> department;
}

//  Residence
Residence::Residence() : Buildings() {
    this->roomType = "";
}

Residence::Residence(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {
    this -> roomType = "";
}

Residence::Residence(string name, string addr, int date, string dedication, string roomType) : Buildings(name, addr, dedication, date) {
    this -> roomType = roomType;
}

void Residence::setRoomType(const string& roomType) {
    this -> roomType = roomType;
}

string Residence::getRoomType() {
    return this -> roomType;
}

// Libraries
Libraries::Libraries() : Buildings() {}
Libraries::Libraries(string name, string addr, int date, string dedication) : Buildings(name, addr, dedication, date) {}

