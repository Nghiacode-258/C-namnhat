#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    set <int> result;
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        result.insert(a[i]);
    }
    for(int x :result){
        cout << x <<" ";
    }
    cout << endl;
}