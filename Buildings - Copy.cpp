//
//  Buildings.cpp
//


#include "Buildings.h"
#include <string>
#include <stdio.h>

using namespace std;

//  buildings
Buildings::Buildings(string loc, string addr, string name) : MapObjects (loc, addr, name) {
    this -> dedication = "";
    this -> date = 0;
}

Buildings::Buildings(string loc, string addr, string name, string dedication, int date) : MapObjects (loc, addr, name) {
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
foodLocation::foodLocation(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {}

//  lectureHalls
lectureHalls::lectureHalls(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {
    this -> department = "";
}

lectureHalls::lectureHalls(string loc, string addr, string name, string dedication, int date, string department) : Buildings(loc, addr, name, dedication, date) {
    this -> department = department;
}

void lectureHalls::setDepartment(const string& department) {
    this -> department = department;
}

string lectureHalls::getDepartment() {
    return this -> department;
}

//  Residence
Residence::Residence(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {
    this -> roomType = "";
}

Residence::Residence(string loc, string addr, string name, string dedication, int date, string roomType) : Buildings(loc, addr, name, dedication, date) {
    this -> roomType = roomType;
}

void Residence::setRoomType(const string& roomType) {
    this -> roomType = roomType;
}

string Residence::getRoomType() {
    return this -> roomType;
}

// Libraries
Libraries::Libraries(string loc, string addr, string name, string dedication, int date) : Buildings(loc, addr, name, dedication, date) {}

