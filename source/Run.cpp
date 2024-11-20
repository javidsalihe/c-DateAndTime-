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
}