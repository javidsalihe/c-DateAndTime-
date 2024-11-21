//
// Created by Javid Salihe on 20.11.24.
//

#include "../header/Date.h"
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

void Date::displayDate2()  {

    time_t now = time(nullptr);
    if (now < Date::taskStartDate) {
        int daysLeft = Date::daysDifference(now, Date::taskStartDate);
        cout << "Task hasn't started yet. " << daysLeft << " days left until start." << endl;
    } else if (now >= Date::taskStartDate && now <= Date::taskEndDate) {
        int daysLeft = Date::daysDifference(now, Date::taskEndDate);
        cout << "Task is in progress. " << daysLeft << " days left until deadline." << endl;
    } else {
        int daysOverdue = Date::daysDifference(Date::taskEndDate, now);
        cout << "Task is overdue. " << daysOverdue << " days past the deadline." << endl;
    }
}

int Date::daysDifference(time_t startDate, time_t endDate) {
    return abs(difftime(endDate, startDate) / 86400); // 86400 seconds = one day
}


