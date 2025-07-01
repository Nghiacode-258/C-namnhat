#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         unordered_map<int, int> freq;

//         for (int &x : a) {
//             cin >> x;
//             freq[x]++;
//         }

//         sort(a.begin(), a.end(), [&](int i, int j) {
//             if (freq[i] != freq[j]) return freq[i] > freq[j];
//             return i < j;
//         });

//         for (int x : a) cout << x << " ";
//         cout << endl;
//     }
// }



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        unordered_map<int,int> freq;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(),a.end(),[&](int i , int j){
            if(freq[i] != freq[j]) return freq[i] > freq[j];
            return i < j;
        });
        for( int i = 0;i < n;i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}