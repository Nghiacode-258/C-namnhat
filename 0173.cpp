#include<bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long LCM(long long a, long long b) {
    return (a / GCD(a, b)) * b;
}

long long LCM2(const vector<long long>& num){
    long long result = num[0];
    for(int i = 1;i <num.size();i++){
        result = LCM(result,num[i]);
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long X , Y ,Z ,N;
        vector <long long > num;
        cin >> X >> Y >> Z >> N;
        num.push_back(X);
        num.push_back(Y);
        num.push_back(Z);
        long long n = LCM2(num);
        long long start = pow(10,N-1);
        long long end = pow(10,N)-1;
        long long result = ( start + n -1)/n *n;
        if ( result > start && result < end){
            cout << result ;
        }else{
            cout <<"-1";
        }
        cout << endl;
    }
}