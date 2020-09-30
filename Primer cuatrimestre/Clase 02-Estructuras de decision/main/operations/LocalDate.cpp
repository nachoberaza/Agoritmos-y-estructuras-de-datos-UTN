#include "stdio.h"
#include <ctime>
#include "time.h"

struct Date{
    int day;
    int month;
    int year;
};

Date getLocalTime()
{
    time_t t;
    struct tm *tm;
    char fechayhora[100];
    Date date;

    t = time(NULL);
    tm = localtime(&t);

    //printf("Hoy es: %02d/%02d/%d\n", tm->tm_mday, tm->tm_mon, 1900 + tm->tm_year);

    date.day=tm->tm_mday;
    date.month=tm->tm_mon;
    date.year=1900 + tm->tm_year;

    return date;
}
