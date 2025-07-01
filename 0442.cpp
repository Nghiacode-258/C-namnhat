#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        bool found = false;
        for(int i = 0;i < n && !found;i++){
            if(a[i] == x){
                cout <<"1";
                found = true;
            }
        }
        if(!found){
            cout <<"-1";
        }
        cout << endl;
    }
}