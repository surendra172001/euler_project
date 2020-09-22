#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll g = 1;
    for(ll i = 2; i < 21; i++) {
        g = (i*g)/__gcd(i, g);
    }
    cout << g << endl;
    return 0;
}
