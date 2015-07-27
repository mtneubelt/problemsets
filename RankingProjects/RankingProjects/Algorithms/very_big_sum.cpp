#include <cstdio>
#include <iostream>
using namespace std;

void veryBigSum() {
    unsigned int seed;
    unsigned long long int num;
    unsigned long long total;

    cin >> seed;
    total = 0;

    for(int i=0; i<seed; i++) {
        cin >> num;
        total = total + num;
    }
    cout << total;
}