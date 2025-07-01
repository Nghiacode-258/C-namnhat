#include<bits/stdc++.h>

using namespace std;

string sub(string num1,string num2) {
    int len1 = num1.size();
    int len2 = num2.size();

    if (len1 < len2 || (len1 == len2 && num1 < num2)) {
        swap(num1, num2);
        swap(len1, len2);
    }
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int i = len2; i < len1; ++i) num2.push_back('0');
    string result;
    int borrow = 0;

    for (int i = 0; i < len1; ++i) {
        int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else
            borrow = 0;
        result.push_back(diff + '0');
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string num1;
        string num2;
        cin >> num1 >> num2;
        cout << sub(num1, num2) << endl;
    }
}