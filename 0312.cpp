#include<bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        int k;
        cin>>k;
        cin.ignore();

        set < char > ss;
        
        for(int i = 0;i < s.size();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ss.insert(s[i]);
            }
        }
        int soluong = 26 - ss.size();
        if(soluong <= k){
            cout << "1";
        }else{
            cout << "0";
        }
        cout << endl;
    }
}