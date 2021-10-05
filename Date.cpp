#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {

    if(day > 31 || day < 1) this->day = 1;
    if(month > 12 || month < 1) this->month = 1;
}

int Date::getDay() const{
    return this->day;
}
int Date::getMonth() const{
    return this->month;
}
int Date::getYear() const{
    return this->year;
}

void Date::setDay(int day){
    this->day = day;
}
void Date::setMonth(int month){
    this->month = month;
}
void Date::setYear(int year){
    this->year = year;
}
