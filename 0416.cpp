#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> result(n);
        for(int i = 0;i < n;i ++){
            cin >> result[i];
        }
        int cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                if((k- result[i]) == result[j]){
                    cnt++;
                }
            }
        }
        cout << cnt <<endl;
    }
}