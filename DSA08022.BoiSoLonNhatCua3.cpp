#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second

using namespace std;

int n,a[100005];

string solve(){
    map<string,int> mp;
    sort(a,a+n);
    string res;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        sum=(sum+a[i])%3;
        res+=to_string(a[i]);
    }
    if(sum==0) return res;
    queue<pair<string,int>> q;
    q.push({res,sum});
    while(q.front().fi.size()>1){
        auto top=q.front(); q.pop();
        string s=top.fi; int m=top.se;
        for(int i=s.size()-1;i>=0;i--){
            string tmp=top.fi;
            tmp.erase(tmp.begin()+i);
            if(!mp[tmp]){
                int mod=(m+3-(s[i]-'0')%3)%3;
                if(mod==0) return tmp;
                q.push({tmp,mod});
                mp[tmp]=1;
            }
        }
    }
    return "-1";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        cout << solve() << endl;
    }
}

