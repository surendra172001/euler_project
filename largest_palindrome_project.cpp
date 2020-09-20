#include<bits/stdc++.h>
using namespace std;

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
        for(int j = 999; j > 100; j--) {
            ll prod = i*j;
            if(checkPalindrome(prod)) {
                maxProd = max(maxProd, prod);
            }
        }
    }
    return maxProd;
}

int main() {
    cout << largestPalindrome() << endl;
    return 0;
}

// 4613720 
// 4613732