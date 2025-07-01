#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<int> a(n) , b(m);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin() ,b.end());
        vector<int>result1;
        set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(result1));
        for(int c : result1){
            cout << c <<" ";
        }
        cout << endl;
        vector<int>result2;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(result2));
        for(int d : result2){
            cout << d <<" ";
        }
        cout << endl;
    }
}