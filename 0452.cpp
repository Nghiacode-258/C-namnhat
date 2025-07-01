#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n , m , p;
        cin >> n >> m >> p;
        vector<long long> a(n), b(m) , c(p);
        for(long long  i = 0;i < n;i ++){
            cin >> a[i];
        }
        for(long long i = 0;i < m;i ++){
            cin >> b[i];
        }
        for(long long i = 0;i < p;i ++){
            cin >> c[i];
        }

        vector<long long > ab;
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ab));

        vector<long long> abc;
        set_intersection(ab.begin(), ab.end(), c.begin(), c.end(), back_inserter(abc));

        if (abc.empty()) {
            cout << "-1";
        } else {
            for(long long x : abc){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}