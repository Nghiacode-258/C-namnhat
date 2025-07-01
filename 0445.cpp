#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> nhap;
        for(int i = 0;i < n;i++){
            int a;
            cin >> a;
            nhap.insert(a); 
        } 

        if(nhap.size()==1) cout << "-1";
        else{
            auto it = nhap.begin();
            int min1 = *it; 
            it++;  
            int min2 = *it; 
            cout << min1 << " " << min2 ;
            }
        cout << endl;
    }
}