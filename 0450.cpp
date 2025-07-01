#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i ++){
            cin >> a[i];
        }
        unordered_set<int> seen;
        int first = -1;
        for(int i = 0;i < a.size();i++){
            if(seen.find(a[i]) != seen.end()){
                first = a[i];
                break;
            }
            seen.insert(a[i]);
        }
        cout << first << endl;
    }
}