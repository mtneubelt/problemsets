#include <cstdio>
#include <iostream>
using namespace std;

void plusMinus() {
    unsigned int seed;
    int element;
    unsigned int positive;
    unsigned int negative;
    unsigned int zeros;

    positive = 0;
    negative = 0;
    zeros = 0;

    cin >> seed;
    for(unsigned int i = 0; i < seed; i++) {
        cin >> element;
        if(element == 0)
            zeros++;
        if(element > 0)
            positive++;
        if(element < 0)
            negative++;
    }
    cout.precision(3);
    cout << float(positive)/float(seed) << endl;
    cout << float(negative)/float(seed) << endl;
    cout << float(zeros)/float(seed) << endl;
    
}
