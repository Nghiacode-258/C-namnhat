#include<bits/stdc++.h>

using namespace std;

bool Lucky(int n) {
    while (n > 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n == 9;
}

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n , sum = 0;
        cin >> n;
        while(n > 0){
            sum += n% 10;
            n /= 10;
        }
        if(Lucky(sum)){
            cout << "1" ;
        }else cout << "0";
        cout << endl;
    }
    return 0;
}
