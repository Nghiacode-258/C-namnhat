#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        vector<int>result(n);
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) result[i] = a[cnt++];
        }
        for (int i = 0; i < n; ++i) {
            if (i % 2 != 0) result[i] = a[cnt++];
        }
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}