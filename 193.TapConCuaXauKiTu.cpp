#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
string s,tmp;
set<string> st;
void Try(int i){
    for(int j=i;j<n;j++){
        tmp+=s[j];
        st.insert(tmp);
        Try(j+1);
        tmp.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        tmp="";
        cin >> n >> s;
        Try(0);
        for(auto i:st) cout <<i <<" ";
        cout << endl;
    }
}