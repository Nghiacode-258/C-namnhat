#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num , even = 0 , odd = 0;
        while(ss >> num){
            if(num %2 == 0) even++;
            else odd++;
        }
        int sum = even + odd;
        if(sum % 2 == 0 && even > odd || sum % 2 == 1 && even < odd){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
}