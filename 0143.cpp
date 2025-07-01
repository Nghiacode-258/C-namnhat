#include<bits/stdc++.h>

using namespace std;

long long fibonacci(int n){
    long long f1=1 , f2 = 1,fn;
    if( n == 1 || n ==2) return 1;
    for(int i = 3;i <= n;i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
int main (){
    int t;
    cin >> t ;
    while (t--) {
        int n;
        cin >> n;
        if(n > 92) break;
        cout << fibonacci(n) << endl;        
    }
    return 0;
}