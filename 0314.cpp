#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    set <string> m;
    cin.ignore();
    for (int i= 0;i < n;i++){
        string s;
        getline(cin , s);
        m.insert(s);
    }
    cout << m.size() <<endl;
}