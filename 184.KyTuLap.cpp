#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, res;
string s[1005];

int lap(string a,string b){
    int i=0,j=0,cnt=0;
    while(i<a.size() && j<b.size()){
        if(a[i]==b[j]){
            cnt++; i++; j++;
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    return cnt;
}

int main(){
    res=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> s[i];
    sort(s,s+n);
    for(int i=0;i<n-1;i++){
        res+=lap(s[i],s[i+1]);
    }
    while(next_permutation(s,s+n)){
        int tmp=0;
        for(int i=0;i<n-1;i++){
            tmp+=lap(s[i],s[i+1]);
            if(tmp>res) break;
        }
        res=min(res,tmp);
    }
    cout << res << endl;
}