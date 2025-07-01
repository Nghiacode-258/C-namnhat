#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , m , p;
    cin >> n >> m >> p;
    vector<vector<int>> a(n , vector<int>(m));
    vector<vector<int>> b(m , vector<int>(p));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) std::cin >> a[i][j];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) std::cin >> b[i][j];
    }
    vector<vector<int>> c(n , vector<int> (p,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < p;j++){
            for (int k = 0;k < m;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0 ;i < n;i++){
        for (int j = 0;j < n;j++){
            cout <<c[i][j]<<" ";
        }
        cout << endl;
    }
}