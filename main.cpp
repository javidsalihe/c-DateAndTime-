#include <iostream>
#include <ctime>
#include "header/Run.h"
using namespace std;


int daysDifference(time_t start, time_t end) {
    return abs(difftime(end, start) / 86400); // 86400 seconds = one day
}

int main() {

    Run();

    // تنظیم تاریخ شروع تسک
    tm taskStart = {};
    taskStart.tm_year = 2024 - 1900; // سال‌ها از 1900 شروع می‌شوند
    taskStart.tm_mon = 9;          // نوامبر = 10
    taskStart.tm_mday = 25;         // روز ماه

    // تنظیم تاریخ پایان تسک
    tm taskEnd = {};
    taskEnd.tm_year = 2024 - 1900;
    taskEnd.tm_mon = 10;            // دسامبر = 11
    taskEnd.tm_mday = 15;           // روز ماه

    // تبدیل تاریخ‌ها به time_t
    time_t taskStartDate = mktime(&taskStart);
    time_t taskEndDate = mktime(&taskEnd);

    // دریافت تاریخ و زمان فعلی
    time_t now = time(nullptr);

    // بررسی وضعیت تسک
    if (now < taskStartDate) {
        int daysLeft = daysDifference(now, taskStartDate);
        cout << "Task hasn't started yet. " << daysLeft << " days left until start." << endl;
    } else if (now >= taskStartDate && now <= taskEndDate) {
        int daysLeft = daysDifference(now, taskEndDate);
        cout << "Task is in progress. " << daysLeft << " days left until deadline." << endl;
    } else {
        int daysOverdue = daysDifference(taskEndDate, now);
        cout << "Task is overdue. " << daysOverdue << " days past the deadline." << endl;
    }


    return 0;
    // time_t is a typedef or type alias defined in the C standard library (<ctime> or <time.h>).
    // nehmt paramerter als adresse nicht als aktuele value und zeigen datum und zeit wie NUMMER
    //ctime(&currentTimeAndDate)
    // full date und time => "%d-%m-%Y %H-%M-%S" or just date  => "%d-%m-%Y"
    // day of week => "%A"
    // month of the year => "%B"

    /*time_t currentTimeAndDate = time(nullptr);
    tm* localDateAndTime = localtime(&currentTimeAndDate);
    char formattedDateAndTime[50];
    strftime(formattedDateAndTime,sizeof(formattedDateAndTime),"%B",localDateAndTime);
    std::cout << formattedDateAndTime  << std::endl;
    */


}
