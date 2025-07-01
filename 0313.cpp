#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    getline(cin , a);
    getline(cin , b);

    stringstream ss(a);
    string word;
    vector<string> result;

    while(ss >> word){
        if(word != b){
            result.push_back(word);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}