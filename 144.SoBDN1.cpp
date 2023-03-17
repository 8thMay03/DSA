#include <bits/stdc++.h>
#define ll long long
using namespace std;

queue<string> q;
vector<ll> v;
ll n;
void sinh(){
    v.push_back(1);
    q.push("1");
    while(v.back()<1e18){
        string tmp=q.front();
        q.pop();
        v.push_back(stoll(tmp+"0"));
        v.push_back(stoll(tmp+"1"));
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
}
int main(){
    sinh();
    int t;
    cin >> t;
    while(t--){
        ll res=0;
        cin >> n;
        for(int i=0;i<n;i++){
            if(v[i]>n) break;
            res++;
        }
        cout << res << endl;
    }
}