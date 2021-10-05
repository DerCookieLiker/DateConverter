#include "DateConverter.h"
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>

int DateConverter::numberOfUsage = 0;

int DateConverter::getNumberOfUsage(){
    return DateConverter::numberOfUsage;
}
const char* DateConverter::toString(const Date &d){
    char temp[101];
    sprintf(temp, "%d-%d-%d", d.getYear(), d.getMonth(), d.getDay());

    char* retVal = new char[strlen(temp) + 1];
    strcpy(retVal, temp);

    return retVal;

}
Date DateConverter::toDate(const char* dateStr){

    int strLength = (int) strlen(dateStr);
    char seperate[3][10];
    int counter = 0;
    char temp[10];
    int tempCounter = 0;

    for(int i = 0; i < strLength; i++){
        if(dateStr[i] == '-'){
            i++;
            strcpy(seperate[counter], temp);
            tempCounter = 0;
            strcpy(temp, "         ");
            counter++;
        }
        temp[tempCounter] = dateStr[i];
        tempCounter++;
    }
    strcpy(seperate[counter], temp);

    int year = atoi(seperate[0]);
    int month = atoi(seperate[1]);
    int day = atoi(seperate[2]);

    return Date(day, month, year);
}
