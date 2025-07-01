#include<bits/stdc++.h>

using namespace std;

vector<bool>prime(1000001, true);

void sieve(){
    prime[0] = prime[1] = false;
    for(int i = 0;i <=1000 ;i++){
        if(prime[i]){
            for(int j = i*i;j <= 1000001;j+=i){
                prime[j] = false;
            }
        }
    }
}

long long GCD(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    sieve();
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 0;i <= n;i++){
            if(GCD(i,n)==1){
                cnt ++;
            }
        }
        if(prime[cnt]){
            cout << "1" <<endl;
        }else cout << "0" <<endl;
    }
}