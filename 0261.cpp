#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    vector<vector<int>> b(m,vector<int> (m));
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cin >> b[i][j];
        }
    }
    vector<vector<int>> res(n,vector<int>(n,0));
    for (int i = 0; i < n; i += m) {
        for (int j = 0; j < n; j += m) {
            for (int x = 0; x < m; ++x) {
                for (int y = 0; y < m; ++y) {
                    res[i + x][j + y] = b[x][y];
                }
            }
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            a[i][j] = a[i][j] * res[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}