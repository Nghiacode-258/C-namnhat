#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        set<int> result;
        for(int i = 0;i < n;i++){
            for(char c : a[i]){
                result.insert(c - '0');
            }
        }
        for(int d : result){
            cout << d <<" ";
        }
        cout << endl;
    }
}