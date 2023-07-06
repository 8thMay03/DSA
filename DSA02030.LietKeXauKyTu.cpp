#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define psi pair<string,int>
#define fi first
#define se second
#define vi vector<int>
#define pb(x) push_back(x)
#define pop pop_back();

using namespace std;

char c; int n; vector<string> ans; string s;

void Try(char i){
    for(char j=i;j<=c;j++){
        s+=j;
        if(s.size()==n) ans.pb(s);
        else Try(j);
        s.pop_back();
    }
}

int main(){
    cin >> c >> n;
    Try('A');
    for(auto i:ans) cout << i << endl;
}