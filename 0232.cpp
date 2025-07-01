#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m , n;
        cin >> n >> m;
        vector<vector<int>> result(n,vector<int>(m));
        vector<vector<int>> height(n,vector<int>(m));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin >> result[i][j];
            }
        }
        for(int j = 0;j < m;j++){
            height[0][j] = result[0][j];
            for(int i = 1;i < n;i++){
                if(result[i][j] == 1){
                    height[i][j] = height[i - 1][j] + 1;
                }
                else{
                    height[i][j] = 0;
                }
            }
        }
        int Maxarea = 0;
        for(int i = 0;i < n;i++){
            vector<int> row = height[i];
            sort(row.begin(),row.end(),greater<int>());
            for(int j = 0;j < m;j++){
                int area = row[j] * (j+1);
                Maxarea = max(Maxarea ,area);
            }
        }
        cout << Maxarea <<endl;
    }
}