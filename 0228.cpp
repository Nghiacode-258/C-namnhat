#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s = 4*n;
        vector<vector<int>> a(s,vector<int>(s));
        int value = 1;
        for(int i = 0;i < s;i++){
            for(int j = 0;j < s;j++){
                a[i][j] = value++;
            }
        }
        vector<int> s1 , s2;
        int j = 0;
        int x = s-1;
        while (j < s/2) {
            for (int i = j; i <= x; i++)
                s1.push_back(a[i][j]);
            for (int i = j + 1; i < x; i++)
                s1.push_back(a[x][i]);
            for (int i = x - 1; i > j; i--)
                s1.push_back(a[i][x - 1]);
            for (int i = x - 2; i > j + 1; i--)
                s1.push_back(a[j + 1][i]);
            x -= 2;
            j += 2;
        }
        x=s-1;
        j = 0;
        while(j < s/2){
            for(int i = x;i >=j;i--){
                s2.push_back(a[i][x]);
            }
            for(int i = x-1;i > j;i--){
                s2.push_back(a[j][i]);
            }
            for(int i = j+1;i < x;i++){
                s2.push_back(a[i][j+1]);
            }
            for(int i = j+2;i < x -1;i++){
                s2.push_back(a[x-1][i]);
            }
            x-=2;
            j+=2;
        }
        for(int i = s2.size()-1;i >= 0;i--){
            cout << s2[i] <<" ";
        }
        cout << endl;
        for (int i = s1.size()-1;i >= 0;i--){
            cout << s1[i] <<" ";
        }
        cout << endl;
    }
}
