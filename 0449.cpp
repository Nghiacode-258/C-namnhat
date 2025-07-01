#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , x ;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        unordered_set<int> seen;
        int ktra = 0;
        for(int i = 0;i < n;i ++){
            if(seen.find(a[i] - x) != seen.end()){
                cout << "1" << endl;
                ktra++;
                break;
            }
            seen.insert(a[i]);
        }
        if(ktra == 0){
            cout << "-1" <<endl;
        }
    }
}