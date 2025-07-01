#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a , b;
        cin >> a >> b;
        long long bcnn = lcm(a , b);
        long long ucln = gcd(a,b);

        cout << bcnn << " " << ucln << endl;
    }
    return 0;
}