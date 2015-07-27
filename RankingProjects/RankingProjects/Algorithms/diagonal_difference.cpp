#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

void diagonalDifference() {
    unsigned int seed;
    int element;
    int ld;
    int rd;
    ld = 0;
    rd = 0;
    cin >> seed;
    for(int i = 0; i < seed; i++) {
        for(int j = 0; j < seed; j++) {
            cin >> element;            
            if(i == j) {
                ld = ld + element ;            
            }
            if(i == (seed - 1 - j)){
                rd = rd + element;
            }
        }        
    }
    cout << abs(ld-rd);
}