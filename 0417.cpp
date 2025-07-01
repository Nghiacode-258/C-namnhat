#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n ;i++){
            cin >> a[i];
        }
        vector<int>temp = a;
        sort(temp.begin(),temp.end());
        int left = 0, right = 0;
        for(int i = 0;i < n;i++){
            if(a[i] != temp[i]){
                left = i+1;
                break;
            }
        }
        for(int i = n - 1;i >=0;i--){
            if(a[i] != temp[i]){
                right = i + 1;
                break;
            }
        }
        cout << left << " "<< right << endl;
    }
}