#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >>n ;
        int a[m];
        for(int i = 0;i < m;i++){
            cin >> a[i] ;
        }
        sort(a,a+m);
        for(int i = m-1 ;i  >= m-n;i--){
            cout << a[i] << " ";
        }
        cout<<endl;
    }
}