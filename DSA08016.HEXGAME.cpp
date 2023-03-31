#include<iostream>
#include<map>
#include<queue>
#include<unordered_map>

using namespace std;

int res;
string s,e;
unordered_map<string,int> mp;

int l1[10]={3,0,2,7,4,1,6,8,5,9};
int r1[10]={0,4,1,3,8,5,2,7,9,6};
int l2[10]={1,5,2,0,4,8,6,3,7,9};
int r2[10]={0,2,6,3,1,5,9,7,4,8};

string left1(string a){
    string s="";
    for( int i=0;i<=9;i++) s+=a[l1[i]];
    return s;
}
string right1(string a){
    string s="";
    for( int i=0;i<=9;i++) s+=a[r1[i]];
    return s;
}
string left2(string a){
    string s="";
    for( int i=0;i<=9;i++) s+=a[l2[i]];
    return s;
}
string right2(string a){
    string s="";
    for( int i=0;i<=9;i++) s+=a[r2[i]];
    return s;
}

void bfs1(string s){
    queue<pair<string,int>> q;
    q.push({s,0});
    while(1){
        auto t=q.front(); q.pop();
        if(t.second==12) return;
        string x;
        x=left1(t.first);
        if(!mp[x]){
            mp[x]=t.second+1;
            if(x==e) {res=mp[x]; return;}
            q.push({x,t.second+1});
        }
        x=right1(t.first);
        if(!mp[x]){
            mp[x]=t.second+1;
            if(x==e) {res=mp[x]; return;}
            q.push({x,t.second+1});
        }
    }
}   
int bfs2(string e){
    queue<pair<string,int>> q;
    q.push({e,0});
    while(1){
        auto t=q.front(); q.pop();
        if(mp[t.first]) return t.second+mp[t.first];
        string x,y;
        x=left2(t.first);
        y=right2(t.first);
        q.push({x,t.second+1});
        q.push({y,t.second+1});
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        mp.clear();
        s="",e="1238004765";
        for(int i=0;i<=9;i++){
           char c;
           cin >> c;
           s+=c;
        }
        bfs1(s);
        if(mp[e]) cout << mp[e] << endl;
        else cout << bfs2(e) << endl;
    }
}