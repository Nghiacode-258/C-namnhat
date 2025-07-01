#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0;i < n;i++){
            cin >> A[i];
        }
        sort(A.begin(),A.end());
        int l = 0, r= n-1;
        vector<int>result;
        while(l <= r){
            result.push_back(A[r]);
            r--;
            if(l <= r){
                result.push_back(A[l]);
                l++;
            }
        }
        for(int i = 0;i < n; i++){
            cout << result[i] <<" ";
        }
        cout << endl;
    }
}