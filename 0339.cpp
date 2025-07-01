#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        int sum = 0;
        for(int i = 0;i < s.size() ;i++){
            for(int j = i;j < s.size();j++){
                if(s[i] == s[j] ){
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
}