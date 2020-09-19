#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = 4e6;


int main() {
    
    ll sum = 0, a = 0, b = 2;
    while(b <= MAX) {
        sum += b;
        ll t = 4*b+a;
        a = b;
        b = t;
    }
    
    // ll sum = 0, a = 1, b = 2;
    // while(b <= MAX) {
    //     sum += (b % 2 == 0 ? b : 0);
    //     ll t = a+b;
    //     a = b;
    //     b = t;
    // }
    
    cout << sum << endl;

    return 0;
}

// 4613720 
// 4613732