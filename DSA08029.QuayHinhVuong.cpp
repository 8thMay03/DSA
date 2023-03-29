#include<bits/stdc++.h>
#define ll long long

using namespace std;

int a[6],b[6];
string s,e;

string left(string s){
    string tmp;
    tmp+=s[3]; tmp+=+s[0]; tmp+=s[2]; tmp+=s[4]; tmp+=s[1]; tmp+=s[5];
    return tmp;
}

string right(string s){
    string tmp;
    tmp+=s[0]; tmp+=+s[4]; tmp+=s[1]; tmp+=s[3]; tmp+=s[5]; tmp+=s[2];
    return tmp;
}

int solve(){
    s="",e="";
    map<string,int> mp;
    for(int i=0;i<6;i++) {s+=(a[i]+'0'); e+=(b[i]+'0');}
    if(s==e) return 0;
    queue<pair<string,int>> q;
    mp[s]=1;
    q.push({s,0});
    while(!q.empty()){
        pair<string,int> t=q.front();
        q.pop();
        if(!mp[left(t.first)]){
            if(left(t.first)==e) return t.second+1;
            q.push({left(t.first),t.second+1});
            mp[left(t.first)]=1;
        }   
        if(!mp[right(t.first)]){
            if(right(t.first)==e) return t.second+1;
            q.push({right(t.first),t.second+1});
            mp[right(t.first)]=1;
        }
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=0;i<6;i++) cin >> a[i];
        for(int i=0;i<6;i++) cin >> b[i];
        cout << solve() << endl;
    }
}