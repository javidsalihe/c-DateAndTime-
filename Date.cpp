//
// Created by Javid Salihe on 20.11.24.
//

#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}

void Date::displayDate() const {
    cout << "Day:  " << (getDay() < 10 ? "0" : "") << getDay() << endl;
    cout << "Month:  " << (getMonth() < 10 ? "0" : "") << getMonth() << endl;
    cout << "Year:  " << getYear() << endl;
}


