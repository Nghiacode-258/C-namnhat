#include<bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<int> a(n) , b(m);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        set<int>result1;
        result1.insert(a.begin(),a.end());
        result1.insert(b.begin(),b.end());
        for(int c : result1){
            cout << c <<" ";
        }
        cout << endl;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>result2;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(result2));
        for(int d : result2){
            cout << d <<" ";
        }
        cout << endl;
    }
}