#include <iostream>
#include "Date.h"
#include "DateConverter.h"

using namespace std;

int main()
{
    Date d = DateConverter::toDate("2021-10-4");

    std::cout << DateConverter::toString(d);
}
