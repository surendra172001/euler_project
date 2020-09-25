#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll SOE_sum(int n)
{
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    ll sum = 0;
    for(int i = 2; i <= n; i++) {
        sum += (is_prime[i] ? i : 0);
    }
    return sum;
}


int main() {
    int n = 2e6;
    cout << SOE_sum(n) << endl;
    return 0;
}
