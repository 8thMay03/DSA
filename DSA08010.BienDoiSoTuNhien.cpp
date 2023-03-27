#include <bits/stdc++.h>
#define ll long long

using namespace std;


int solve(int n){
    map<int,int> mp;
    queue<pair<int,int>> q;
    q.push({n,0});
    mp[n]=1;
    while(1){
        pair<int,int> t=q.front();
        q.pop();
        if(!mp[t.first-1]){
            if(t.first-1==1) return t.second+1;
            q.push({t.first-1,t.second+1});
            mp[t.first-1]=1;
        }
        for(int i=2;i<=sqrt(t.first);i++){
            if(t.first%i==0){
                if(!mp[t.first/i]){
                    if(t.first/i==1) return t.second+1;
                    q.push({t.first/i,t.second+1});
                    mp[t.first/i]=1;
                }
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       cout << solve(n) << endl;
    }
}