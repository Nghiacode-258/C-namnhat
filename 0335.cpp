#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        for(int i = 0;i < s.size();i ++){
            if(!isdigit(s[i])) s[i] = ' ';
        }
        stringstream ss(s);
        string num;
        while(ss >> num){
            if(sum < stoi(num)){
                sum = stoi(num);
            }
        }
        cout << sum << endl;
    }
}