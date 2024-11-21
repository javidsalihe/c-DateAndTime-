#ifndef DATE_H
#define DATE_H
#include <ctime>



class Date {

private:
    int day;
    int month;
    int year;

    public:
    Date();
    Date(int day = 0, int month =0, int year = 0);

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void displayDate() const;


    tm taskStart = {};
    tm taskEnd = {};
    time_t taskStartDate;
    time_t taskEndDate;
    void displayDate2();
    int daysDifference(time_t startDate,time_t endDate);

};



#endif //DATE_H
