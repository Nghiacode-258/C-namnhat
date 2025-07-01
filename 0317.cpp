#include<bits/stdc++.h>

using namespace std;

bool check(string& s){
    for(int i = 0;i < s.size()/2;i++){
        if(s[i] != s[s.size()-i-1] || (s[i]-'0') % 2 !=0 ){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(check(s)){
            cout << "YES";
        }else{
            cout <<"NO";
        }
        cout << endl;
    }
}