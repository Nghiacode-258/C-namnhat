#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }
        vector<int>result;
        int i = 0;
        result.push_back(a[i]*a[i+1]);
        for(int i = 1;i < n - 1;i++){
            int j = i + 1;
            result.push_back(a[i - 1]*a[j]);
        }
        result.push_back(a[n-1] * a[n-2]);
        for(int i = 0;i < n;i ++){
            cout << result[i]<<" ";
        }  
        cout << endl;
    }
}