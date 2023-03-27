#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll l[105];

char solve(string s,ll n) {
    if(n<=s.size()) return s[n-1];
    int i=0;
    while(l[i]<=n) i++;
    i--;
    n-=l[i];
    if(n==0) return solve(s,l[i-1]-1);
    if(n==1) return solve(s,l[i]);
    return solve(s,n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        ll n;
        cin >> s >> n;
        l[0]=s.size();
        ll i=0;
        while(l[i]<n){
            i++;
            l[i]=l[i-1]*2;
        } 
        cout << solve(s,n) << endl;
    }
}
