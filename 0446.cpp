#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        vector<int>a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int result = 1e9 + 1;
        for(int i = 0;i < n;i++){
            for(int j = i+1;j < n;j++){
                int tong = a[i] + a[j];
                if (abs(tong) < abs(result)) result = tong;
            }
        }
        cout << result << endl;
    }
}