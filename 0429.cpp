#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , k , b;
    cin >> n >> k >> b;
    vector<int> result(n+1,1);
    for(int i = 0;i < b;i++){
        int pos;
        cin >> pos;
        result[pos] = 0;
    }
    int dem = 0;
    for(int i = 0;i < k;i++){
        if(result[i]==0){
            dem++;
        }
    }
    int mindem = dem;
    for(int i = k+ 1;i <= n;i++){
        if(result[i - k]== 0){
            dem--;
        }
        if(result[i]==0){
            dem++;
        }
        mindem = min(mindem ,dem);
    }
    cout << mindem << endl;
}