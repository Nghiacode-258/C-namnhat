#include<bits/stdc++.h>

using namespace std;

bool isValid(const string &s) {
    if (s[0] == '0') return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(!isValid(s)){
            cout << "INVALID" << endl;
            continue;
        }
        set<char> result;
        for(char c : s){
            result.insert(c);
        }
        if(result.size() == 10){
            cout << "YES";
        }else{
            cout <<"NO";
        }
        cout << endl;
    }
}