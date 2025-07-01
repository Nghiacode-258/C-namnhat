#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int mod = 0;
        for(char s : n){
            mod = (mod * 2 + (s - '0')) % 5;
        }
        if(mod == 0){
            cout << "Yes";
        }else{
            cout << "No";
        }
        cout << endl;
    }
}