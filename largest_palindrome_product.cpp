#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define ll long long

string numToString(long long x) {
    ostringstream os;
    os << x;
    return os.str();
}

bool checkPalindrome(int x) {
    string num = numToString(x);
    int len = num.length();
    for(int i = 0; i < len/2; i++) {
        if(num[i] != num[len-i-1]) {
            return false;
        }
    }
    return true;
}

ll largestPalindrome() {
    ll maxProd = -1;
    for(int i = 999; i > 100; i--) {
        for(int j = i; j > 100; j--) {
            ll prod = i*j;
            if(checkPalindrome(prod)) {
                maxProd = max(maxProd, prod);
            }
        }
    }
    return maxProd;
}

ll largestPalindromeV2(int n) {
    ll upperLimit = pow(10, n);
    ll lowerLimit = upperLimit;
    upperLimit -= 1;
    lowerLimit /= 10;
    // lowerLimit += 1;

    ll maxProd = -1;

    for(ll i = upperLimit; i >= lowerLimit; i--) {
        for(ll j = i; j >= lowerLimit; j--) {
            ll prod = i*j;
            if(checkPalindrome(prod)) {
                maxProd = max(maxProd, prod);
            }
        }
    }

    return maxProd;
}

int main() {
    // auto start = high_resolution_clock::now();
    cout << largestPalindrome() << endl;
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<milliseconds>(stop - start);
    // cout << duration.count() << endl;
    // cout << largestPalindromeV2(3) << endl;
    return 0;
}

// 4613720 
// 4613732