#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == x){
                cnt++;
            }
        }
        if(cnt > 0){
            cout << cnt << endl;
        }else{
            cout << "-1" <<endl;
        }
    }
}