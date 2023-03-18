#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
queue<string> q;


void solve(){
    if(stoll(q.front())%n==0){
        cout << q.front();
        return;
    }
    while(1){
        string tmp=q.front();
        q.pop();
        q.push(tmp+"0");
        if(stoll(q.front())%n==0){
            cout << q.front();
            return;
        }
        q.push(tmp+"9");
        if(stoll(q.front())%n==0){
            cout << q.front();
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        while(!q.empty()) q.pop();
        q.push("9");
        cin >> n;
        solve();
        cout << endl;
    }
}
