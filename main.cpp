#include <iostream>
#include <ctime>
#include "header/Run.h"


int main()
{
    Run();
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
