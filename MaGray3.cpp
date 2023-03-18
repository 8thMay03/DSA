#include<bits/stdc++.h>
#define ll long long

using namespace std;

char XOR(char a,char b){
    if(a!=b) return '1';
    else return '0';
}
string solve(string s){
    string tmp;
    tmp+=s[0];
    for(int i=1;i<s.size();i++){
        tmp+=XOR(s[i],s[i-1]);
    }
    return tmp;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
}
