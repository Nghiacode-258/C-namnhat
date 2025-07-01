#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long long> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long res = 1e9;
        for(int i = 1;i < n;i++){
            res = min(res,a[i]-a[i-1]);
        }
        cout<<res<<endl;
    }
}