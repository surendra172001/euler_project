#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ll n = 0;
    cin >> n;
    ll nSqrt = sqrt(n);
    ll largestPrimeFactor = 1;
    for(ll i = 2; i <= nSqrt && (n > 1); i += 1) {
        if(n%i == 0) {
            largestPrimeFactor = i;
        }
        while(n%i == 0) {
            n /= i;
        }
    }
    if(n > 1) {
        largestPrimeFactor = max(largestPrimeFactor, n);
    }
    cout << largestPrimeFactor << endl;
    return 0;
}

// 4613720 
// 4613732