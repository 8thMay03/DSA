#include<bits/stdc++.h>
#define ll long long

using namespace std;
int cnt=0;
map<string,int> mp;
void gen(int n){
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    for(int i=2;i<pow(2,n);i*=2){
        for(int j=i-1;j>=0;j--){
            v.push_back(v[j]);
        }
        for(int j=0;j<i;j++){
            v[j]="0"+v[j];
        }
        for(int j=i;j<2*i;j++){
            v[j]="1"+v[j];
        }
    }
    for(string i:v) mp[i]=cnt++;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt=0;
        mp.clear();
        string s;
        cin >> s;
        gen(s.size());
        int n=mp[s];
        stack<int> st;
        while(n>0){
            st.push(n%2);
            n/=2;
        }
        while(st.size()<s.size()){
            st.push(0);
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}