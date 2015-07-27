#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

void libraryFine() {
    unsigned int day, month, year;
    unsigned int exp_day, exp_month, exp_year;
    unsigned int total;
    
    total = 0;
    cin >> day >> month >> year;
    cin >> exp_day >> exp_month >> exp_year;
    
    if(year != exp_year && year > exp_year)
        total = 10000;
    else if(year < exp_year)
        total = 0;
    else {
        if(month != exp_month && month > exp_month)
            total = 500 * (month - exp_month);
        else {
            if(day != exp_day && month == exp_month && day > exp_day)
                total = 15 * (day - exp_day);
        }
    }

    cout << total;
}