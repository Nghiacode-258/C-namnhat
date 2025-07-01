#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> result(n,vector<int>(n));
        vector<int> cot(n),hang(n);
        int cnt = 0;
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < n;j++){
                cin >> result[i][j];
                cot[j] += result[i][j];
                hang[i] += result[i][j];
                cnt += result[i][j];
            }
        }
        int Maxcot = *max_element(cot.begin(),cot.end());
        int Maxhang = *max_element(hang.begin(), hang.end());
        int Maxtong = max(Maxcot , Maxhang);
        int MinOps = n*Maxtong - cnt;
        cout << MinOps << endl;
    }
}