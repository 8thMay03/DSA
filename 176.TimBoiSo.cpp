#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n;
queue<string> q;

void solve(){
    q.push("9");
    if(stoll(q.front())%n==0){
        cout << q.front(); 
        return;
    }
    while(1){
        string top=q.front();
        q.pop();
        q.push(top+"0");
        if(stoll(q.front())%n==0){
            cout << q.front(); 
            return;
        }
        q.push(top+"9");
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
        cin >> n;
        solve();
        cout << endl;
    }
}