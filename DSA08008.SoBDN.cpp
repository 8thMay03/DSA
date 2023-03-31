#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> v;
queue<string> q;
ll n;
bool check(string s,ll n){
    ll r=0;
    for(auto i:s){
        r=(r*10+i-'0')%n;
    }
    return r==0;
}
void solve(){
    q.push("1");
    while(1){
        string tmp=q.front();
        q.pop();
        q.push(tmp+"0");
        if(check(q.front(),n)){
            cout << q.front();
            break;
        }
        q.push(tmp+"1");
        if(check(q.front(),n)){
            cout << q.front();
            break;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        while(!q.empty()){
            q.pop();
        }
        cin >> n;
        solve();
        cout << endl;
    }
}