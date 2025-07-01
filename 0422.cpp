#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        vector<long long> result;
        int cnt = 0;
        for(int i = 0;i < n;i++){
            if(a[i] != 0){
                cnt++;
                result.push_back(a[i]);
            }
        }
        for(int i = 0;i < cnt;i++){
            cout << result[i] << " ";
        }
        for(int i = cnt ;i < n;i++){
            cout << "0" <<" ";
        }
        cout << endl;
    }
}