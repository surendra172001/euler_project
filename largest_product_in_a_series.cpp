#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll calLargestProduct(string inputString) {
    int n = inputString.length();
    
    ll maxM = 0;

    for(int i = 0; i < n-12; i++) {
        ll currProduct = 1;
        for(int j = i; j < i+13; j++) {
            currProduct = currProduct * (inputString[j]-'0');
        }
        maxM = max(currProduct, maxM);
    }
    
    return maxM;
}

int main() {
    string input;
    cin >> input;
    cout << input.length() << endl;
    ll ans = calLargestProduct(input);
    cout << endl;
    cout << ans << endl;
    return 0;
}
