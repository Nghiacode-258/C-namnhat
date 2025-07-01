#include <bits/stdc++.h>
using namespace std;

vector<bool>prime(1000001,true);

void sieve() {
    prime[0] = prime[1] = false;
    for (long long i = 2; i <= 1000; ++i) {
        if (prime[i]) {
            for (long long j = i * i; j < 1000001; j += i) prime[j] = false;
        }
    }
}

int main() {
    sieve();
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long cnt = 0;
        for (long long i = 1; i <= sqrt(n); ++i)
            if (prime[i]) ++cnt;
        cout << cnt << endl;
    }
}