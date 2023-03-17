#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n,a[1005],cnt;
set<string> st;
vector<ll> v;
void pb(){
    string s;
    for(auto i:v) s+=to_string(i);
    st.insert(s);
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
       st.clear();
       set<ll> si;
       cin >> n;
       Try(1);
       for(auto i:st)si.insert(stoll(i));
       cout << si.size() << endl;
       for(auto i:si) cout << i << " ";
       cout << endl;
    }
}