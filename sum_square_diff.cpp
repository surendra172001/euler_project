#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll calDiff(ll n) {
    ll sumOfSquares = n*(n+1)*(2*n+1)/6;
    ll squareOfSum = n*(n+1)/2;
    // cout << sumOfSquares << " " << squareOfSum << endl;
    squareOfSum = squareOfSum*squareOfSum;
    // cout << squareOfSum << endl;
    // cout << sumOfSquares << " " << squareOfSum << endl;
    return (squareOfSum-sumOfSquares);
}

int main() {
    ll n;
    cin >> n;
    cout << calDiff(n) << endl;
    return 0;
}
