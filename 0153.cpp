#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , k;
        cin >> n >> k;
        long long sum = 0;
        if(k == 0){
            sum = 0;
        }else{
            long long q = n / k;
            long long r = n % k;
            sum = q * (k * (k - 1) / 2) + r * (r + 1) / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}