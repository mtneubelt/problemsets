#include <cstdio>
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

void timeConversion() {
    int h, m, s;
    char colon;
    string ampmstr;
    cin >> h >> colon >> m >> colon >> s;

    getline(cin, ampmstr);
    if(ampmstr == "AM") {
        if(h == 12)
            h = 0;
        printf ("%02i:%02i:%02i",h, m, s);
    }
    if(ampmstr == "PM") {
        if (h != 12)
            h = h + 12;       
        printf ("%02i:%02i:%02i",h, m, s);
    }
    if(ampmstr == "")
        printf ("%02i:%02i:%02i",h, m, s);
}