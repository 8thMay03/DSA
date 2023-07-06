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

int n,p,s,t;
vi v;
vector<vi> ans;

bool check(int a){
    if(a<2) return false;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}

void Try(int i,int sum){
    for(int j=i+1;j<=s;j++){
        if(check(j)){
            v.pb(j);
            if(v.size()==n){
                if(sum+j==s) ans.pb(v);
            }
            else Try(j,sum+j);
            v.pop;
        }
    }
}

int main(){
    cin >> t;
    while(t--){
        v.clear(); ans.clear();
        cin >> n >> p >> s;
        Try(p,0);
        cout << ans.size() << endl;
        for(auto v:ans){
            for(auto i:v) cout << i <<" ";
            cout << endl;
        }
    }
}