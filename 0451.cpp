#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int k , x;
        cin >> k >> x;
        sort(a.begin(),a.end());
        int index = -1;
        for(int i = 0;i < n;i ++){
            if(a[i] == x){
                index = i;
                break;
            }
        }
        int m = k/2;
        for(int i = index - m;i < index;i ++){
            cout << a[i] <<" ";
        }
        for(int i = index + 1;i <= index + m;i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}