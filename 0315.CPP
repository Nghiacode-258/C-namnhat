#include<bits/stdc++.h>

using namespace std;

// prev_permutation
// next_permutation

bool isDifferent(string a, string b) {
    int count = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) ++count;
    }
    return count == 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string temp = s;
        string result = "-1";

        while (prev_permutation(s.begin(), s.end())) {
            if (isDifferent(s, temp)) {
                result = s;
                break;
            }
        }

        if (result != "-1")
            cout << result;
        else
            cout << "-1";
        cout << endl;
    }
}