#include<bits/stdc++.h>

using namespace std;

void tongmin(string & s1,string & s2){
    for(int i = 0;i < s1.size();i++){
        if(s1[i] == '6'){
            s1[i] = '5';
        }
    }
    for(int i = 0;i < s2.size();i++){
        if(s2[i] == '6'){
            s2[i] = '5';
        }
    }
}

void tongmax(string & s1,string & s2){
    for(int i = 0;i < s1.size();i++){
        if(s1[i] == '5'){
            s1[i] = '6';
        }
    }
    for(int i = 0;i < s2.size();i++){
        if(s2[i] == '5'){
            s2[i] = '6';
        }
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1 , s2;
        cin >> s1 >> s2;

        string min1 = s1,min2 = s2;
        string max1 = s1,max2 = s2;

        tongmin(min1,min2);
        tongmax(max1,max2);
    
        cout << stoll(min1) + stoll(min2) <<" "<<stoll(max1) + stoll(max2)<<endl;
    }
}