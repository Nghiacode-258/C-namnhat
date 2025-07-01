#include<bits/stdc++.h>

using namespace std;

const long long MOD = 10e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> result(n);
        for(int i = 0;i < n;i++){
            cin >> result[i];
        }
        reverse(result.begin(),result.end());
        long long sum = result[0];
        for(int i = 1;i < n;i++){
            sum = (sum * x +result[i]) % MOD;
        }
        cout << sum << endl;
    }
}