#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k , n;
        cin >> k >> n;
        int s = k * n;
        vector<int> a(s);
        for(int i = 0;i < s;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i = 0;i < s;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}