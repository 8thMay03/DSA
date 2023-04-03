#include<bits/stdc++.h>
#define ll long long

using namespace std;

int a,b;
set<int> snt;
vector<int> ke[10005];

bool checksnt(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

void sang(){
    for(int i=1000;i<=9999;i++){
        if(checksnt(i)) snt.insert(i);
    }
}

bool check(int a,int b){
    int cnt=0;
    string x=to_string(a);
    string y=to_string(b);
    for(int i=0;i<x.size();i++){
        if(x[i]!=y[i]) cnt++;
    }
    return cnt==1;
}

void kt(){
    for(int i:snt){
        for(int j:snt){
            if(i==j) continue;
            if(check(i,j)){
                ke[i].push_back(j);
                ke[j].push_back(i);
            }
        }
    }
}

int solve(int a,int b){
    if(a==b) return 0;
    queue<pair<int,int>> q;
    map<int,int> mp;
    mp[a]=1;
    q.push({a,0});
    while(!q.empty()){
        auto tmp=q.front();
        q.pop();
        for(int i:ke[tmp.first]){
            if(!mp[i]){
                if(i==b) return tmp.second+1;
                mp[i]=1;
                q.push({i,tmp.second+1});
            }
        }
    }
    return -1;
}

int main(){
    sang(); kt();
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}