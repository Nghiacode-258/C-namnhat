#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> result(n,vector<int>(3));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin >> result[i][j];
        }
    }
    int cnt = 0, m = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            m += result[i][j];
        }
        if(m > 1){
            cnt++;
        }
        m = 0;
    }
    cout << cnt << endl;
}