#include<bits/stdc++.h>

using namespace std;

int prime[10001];

void sieve(int n){
    for(int i = 0;i <= n;i++){
        prime[i] = 1;
        }
    prime[0] = prime[1] = 0;
    for(int i = 0;i <= sqrt(n);i++){
        if(prime[i]){
            for (int j = i * i;j <= n;j+= i){
                prime[j] =0;
            }
        }
    }
}

int kiemtra(int N){
    int cnt = 0;
    for( int i = 0;i <= N/2;i++){
        if(prime[i] && prime[N-i]){
            cout << i << " " << N-i;
            cnt ++;
            break;
        }
    }
    if(cnt == 0){
        cout << -1 <<" ";
    }
    cout <<endl;
    return 1;
}

int main(){
    int t;
    cin >> t;
    sieve(10000);
    while(t--){
        int n;
        cin >> n;
        kiemtra(n);
    }
}