#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n - 1);
        for(int i = 0;i < n-1;i++){
            cin >> a[i];
        }
        vector<int>result;
        for(int i = 1;i <= n;i++){
            result.push_back(i);
        }
        for(int i = 0;i < n - 1;i ++){
            if(a[i] != result[i]){
                cout << result[i] << endl;
                break;
            }
        }
    }
}