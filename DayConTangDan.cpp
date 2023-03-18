#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n,a[1005]={0};
set<string> st;
vector<int> v;
void pb(){
    string s;
    for(auto i:v) s+=to_string(i)+' ';
    st.insert(s);
}
void Try(int i){
    for(int j=i+1;j<=n;j++){
        if(a[j]>a[i]){
            v.push_back(a[j]);
            if(v.size()>1) pb();
            Try(j);
            v.pop_back();
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    Try(0);
    for(auto i:st) cout << i << endl;
}