#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 1;i*i <=n;i++){
            if(n%i==0){
                if(i%2==0) ++sum;
                int j = n/i;
                if(j!=i&&j%2==0) ++sum;
            }
        }
        cout << sum << endl;
    }
}