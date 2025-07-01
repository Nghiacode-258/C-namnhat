#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        int sum = 0;
        string a;
        for(int i = 0;i < s.size();i ++){
            if(!isdigit(s[i])){
                a.push_back(s[i]);
            }
            else{
                sum += stoi(string(1,s[i]));
            }
        }
        sort(a.begin(),a.end());
        a+= to_string(sum);
        for(char c : a){
            cout << c;
        }
        cout << endl;
    }
}