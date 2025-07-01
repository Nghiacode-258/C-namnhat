#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m ,n;
        cin >> m >> n;
        int a[m] , b[n];
        for(int i = 0;i < m ;i++){
            cin >> a[i];
        }
        for(int j = 0;j < n;j++){
            cin >> b[j];
        }
        sort(a ,a+m);
        sort(b,b+n);
        long long l = a[m-1];
        long long r = b[0];
        cout << l*r <<endl;
    }
}