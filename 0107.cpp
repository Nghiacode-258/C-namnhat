#include<bits/stdc++.h>

using namespace std;

string first = {"A B B A D C C A B D C C A B D"};
string second ={"A C C A B C D D B B C D D B B"};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin , s);
        double diem = 0;
        if( n == 101){
            for(int i = 0;i < s.size();i ++){
                if(isalpha(s[i]) && s[i]==first[i] ){
                    diem += (double)2/3;
                }
            }
            cout << fixed << setprecision(2) << diem <<endl;
        }
        if( n == 102){
            for(int i = 0;i < s.size();i ++){
                if(isalpha(s[i]) && s[i]==second[i] ){
                    diem += (double)2/3;
                }
            }
            cout<<fixed<<setprecision(2) <<diem <<endl;
        }
    }
}