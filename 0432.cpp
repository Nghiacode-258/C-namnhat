#include<bits/stdc++.h>

using namespace std;

bool compare(string a, string b) {
    return (a + b) > (b + a);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <string> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end(),compare);
        for(int i = 0;i < n;i++){
            cout << a[i];
        }
        cout << endl;
    }
}