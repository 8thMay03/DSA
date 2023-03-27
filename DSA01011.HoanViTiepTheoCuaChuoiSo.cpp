#include <bits/stdc++.h>
using namespace std;

#define ll long long

void next(string s){
    int a[s.size()];
    for(int i=0;i<s.size();i++){
        a[i]=s[i]-'0';
    }
    if(next_permutation(a,a+s.size())){
        for(int i=0;i<s.size();i++){
            cout << a[i];
        }
    }
    else cout<<"BIGGEST";
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       string s;
       cin >> n >> s;
       cout << n <<" " ;
       next(s);
    }
}
