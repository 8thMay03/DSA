#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string s=to_string(n);
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(mp[s[i]]>=2) return false;
        if(s[i]>'5') return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int res=0,l,r;
        cin >> l >> r;
        for(int i=l;i<=r;i++){
            if(check(i)) res++;
        }
        cout << res << endl;
    }
}