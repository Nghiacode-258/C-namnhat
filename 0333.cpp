#include<bits/stdc++.h>

using namespace std;

int main (){
    string s;
    getline(cin , s);
    for(int i = 0;i < s.size();i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string word;
    vector<string> a;
    while(ss >> word){
        a.push_back(word);
    }
    for(int i = 0;i < a.size() -1;i++){
        a[i][0] = toupper(a[i][0]);
    }
    for(int i = 0;i < a.size()-1;i++){
        cout << a[i];
        if(i < a.size()-2){
            cout << " ";
        }
    }
    for (int i = 0;i < a[a.size() - 1].size();i++){
        a[a.size()-1][i] = toupper(a[a.size()-1][i]);
    }
    cout<< ", " << a[a.size()-1];
    return 0;
}