#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n,a[1005],cnt;
vector<string> vs;
vector<ll> v;
bool cmp(ll a, ll b){
    return a>b;
}
void pb(){
    string s;
    for(auto i:v) s+=to_string(i);
    vs.push_back(s);
}
void Try(int i){
    for(int j=6;j<=8;j+=2){
        if(v.size()<n){
            v.push_back(j);
            pb();
            cnt++;
            Try(i+1);
            v.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
       vs.clear();
       vector<ll> vl;
       cin >> n;
       Try(1);
       for(auto i:vs) vl.push_back(stoll(i));
       sort(vl.begin(),vl.end(),cmp);
       cout <<vl.size() << endl;
       for(auto i:vl) cout << i << " ";
       cout << endl;
    }
}