#include<bits/stdc++.h>
#define ll long long

using namespace std;

int x[]={-2,-1,1,2,2,1,-1,-2};
int y[]={-1,-2,-2,-1,1,2,2,1};

int solve(string s,string t){
    if(s==t) return 0;
    queue<pair<string,int>> q;
    map<string,int> mp;
    q.push({s,0});
    mp[s]=1;
    while(1){
        pair<string,int> top=q.front();
        q.pop();
        char x1=top.first[0],y1=top.first[1];
        for(int k=0;k<8;k++){
            char i=x1+x[k];
            char j=y1+y[k];
            string tmp="";
            tmp+=i; tmp+=j;
            if(i>='a' && i<='h' && j>='1' && j<='8' && !mp[tmp]){
                if(i==t[0] && j==t[1]) return top.second+1;
                q.push({tmp,top.second+1});
                mp[tmp]=1;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}