//
// Created by Javid Salihe on 20.11.24.
//

#include "../header/Run.h"
#include "../header/Date.h"


void Run() {

    Date date(0, 0, 0);
    date.setDay(6);
    date.setMonth(5);
    date.setYear(2024);
    date.displayDate();

    date.taskStart.tm_year = 2024 - 1900; // start von 1900
    date.taskStart.tm_mon = 10;          // start von null
    date.taskStart.tm_mday = 23;

    date.taskEnd.tm_year = 2024 - 1900; // end von
    date.taskEnd.tm_mon = 11;
    date.taskEnd.tm_mday = 31;

    // Convert to time_t
    date.taskStartDate = mktime(&date.taskStart);
    date.taskEndDate = mktime(&date.taskEnd);

    date.displayDate2();

    }