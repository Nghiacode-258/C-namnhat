#include<bits/stdc++.h>

using namespace std;

int s[10001];

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(s, 0, sizeof(s));
        int n , L ,R;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        sort(a,a+n);
        L = a[0];
        R = a[n-1];
        for(int i = 0;i <n;i++){
            s[a[i]]=1;
        }
        int dem = 0;
        for (int i = L;i <= R;i++){
            if(s[i] == 0){
                dem++;
            }
        }
        cout << dem <<endl;
    }
}