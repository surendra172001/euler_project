#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int a, int b, int c) {
    return ((a*a+b*b) == c*c);
}

int main() {
    for(int c = 499; c >= 335; c -= 1) {
        int b = c-1;
        int a = 1000-(c+b);
        bool foundTriplet = false;
        while(b > a) {
            foundTriplet = check(a, b, c);
            if(foundTriplet) {
                cout << a << " " << b << " " << c << endl;
                break;
            }
            b -= 1;
            a += 1;
        }
        if(foundTriplet) {
            break;
        }
    }
    return 0;
}
