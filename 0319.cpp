#include<bits/stdc++.h>

using namespace std;

int main(){
    int m , s;
    cin >> m >> s;
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }

    int sum = s;
    string max(m,'0');
    for (int i = 0; i < m; i++) {
        if (sum > 9) {
            max[i] = '9';
            sum -= 9;
        } else {
            max[i] = sum + '0';
            break;
        }
    }

    sum = s;
    string min(m, '0');
    for (int i = m - 1; i >= 0; i--) {
        if(sum > 9){
            min[i] = '9';
            sum -= 9;
        }else{
            if(i==0){
                min[i] = sum + '0';
            }else{
                min[0] = '1';
                min[i] = sum - 1 + '0';
            }
            break;
        }
    }

    cout << min << " " << max << endl;

    return 0;
}
