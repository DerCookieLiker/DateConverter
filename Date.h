#pragma once

class Date{

public:
    Date(int day = 1, int month = 1, int year = 2021);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

private:
    int day;
    int month;
    int year;
};
