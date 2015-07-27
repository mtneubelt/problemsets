#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

void staircase() {
    unsigned int seed;

    cin >> seed;

    for(unsigned int i = 0; i < seed; i++) {
        for(unsigned int j = 0; j < seed; j++) {
            if(i >= seed - j - 1 ) 
                cout << '#';
            else
                cout << ' ';
        }
        cout << '\n';      
    }
}