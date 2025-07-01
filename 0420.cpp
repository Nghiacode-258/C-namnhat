#include<bits/stdc++.h>

using namespace std;

int x;
bool compare(int a, int b) {
    return (abs(a - x) < abs(b - x));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n >> x;
        vector<int>a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        stable_sort(a.begin(),a.end(),compare);
        for(int i = 0;i < n;i ++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}