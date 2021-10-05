#pragma once
#include "Date.h"

class DateConverter{

public:
    static int getNumberOfUsage();
    static const char* toString(const Date &d);
    static Date toDate(const char* dateStr);
private:
    static int numberOfUsage;
};
