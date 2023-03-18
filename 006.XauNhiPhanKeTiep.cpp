#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') return 0;
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)){
            for(int i=0;i<s.size();i++){
                s[i]='0';
            }       
        }
        else{
            int i=s.size()-1;
            while(s[i]=='1') i--;
            s[i]='1';
            for(int j=i+1;j<s.size();j++){
                s[j]='0';
            }
        }    
        cout << s << endl;
    }
}