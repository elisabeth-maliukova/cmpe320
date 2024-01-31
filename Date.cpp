//
//  Date.cpp
//  
//
//  Created by Lizzy Klosa on 2021-11-14.
//

#include "Date.h"
#include "pch.h"

Date::Date() {
    this->minute = "";
    this->hour = "";
    this->day = "";
    this->month = "";
    this->year = "";
}

Date::Date(const string& day, const string& month, const string& year) {
    this->minute = "";
    this->hour = "";
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(const string& minute, const string& hour, const string& day, const string& month, const string& year) {
    this->minute = minute;
    this->hour = hour;
    this->day = day;
    this->month = month;
    this->year = year;
}

string Date::getDate() {
    string minute = this->minute;
    string hour = this->hour;
    string day = this->day;
    string month = this->month;
    string year = this->year;
    if (minute == "" && hour == "") {
        return month + " " + day + ", " + year;
    } else {
        return month + " " + day + ", " + year + "at " + hour + ":" + minute;
    }
}

void Date::setDate(const string& minute, const string& hour, const string& day, const string& month, const string& year) {
    this->minute = minute;
    this->hour = hour;
    this->day = day;
    this->month = month;
    this->year = year;
}

