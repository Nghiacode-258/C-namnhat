#include<bits/stdc++.h>

using namespace std;

set <string> get(string &s){
    set <string> set;
    stringstream ss(s);
    string word;
    while(ss >> word){
        set.insert(word);
    }
    return set;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a ;
        string b;
        getline(cin, a);
        getline(cin , b);
        set <string> se1 = get(a);
        set <string> se2 = get(b);
        for( string c : se2){
            if(se1.find(c) != se1.end()){
                se1.erase(c);
            }
        }
        for( string c : se1){
            cout << c <<' ';
        }
        cout << endl;
    }
}