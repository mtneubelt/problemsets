#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void caesarCipher() {

    int n;
    int length;
    string incoming;
    cin >> length;
    cin >> incoming;
    cin >> n;

    for(int s = 0; s < length; ++s) {
        char c = incoming[s];
        int l = static_cast<int>(c);
        if (l>= 65 && l <= 90) {
            l = (((l - 65 ) + (n%26))%26) + 65 ;
        }
        if ( l>=97 && l <=122){
            l = (((l - 97) + (n%26))%26) + 97 ;

        }
        c = static_cast<char>(l);
        cout << c;
    }
}