#include<bits/stdc++.h>

using namespace std;

int prime[10001];

void sangnt(){
    for(int i = 0;i < 10001;i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2;i < 100;i++){
        for(int j = i*i; j < 10001;j+=i){
            prime[j] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    sangnt();
    while(t--){
        int n;
        cin >> n;
        for(int i = 1 ;i <= n;i ++){
            if(i == 1){
                cout << "1" <<" ";
            }else {
                for (int j = 2; j <= i; j++) {
                    if (prime[j] && i % j == 0) {
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}