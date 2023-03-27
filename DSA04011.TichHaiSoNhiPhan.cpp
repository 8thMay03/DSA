#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll np(string s){
    ll sum=0;
    ll n=s.size()-1;
    for(int i=n;i>=0;i--){
        sum+=(pow(2,n-i)*(s[i]-'0'));
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        cout << np(s1)*np(s2) << endl;
    }
}