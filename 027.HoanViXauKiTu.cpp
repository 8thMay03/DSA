#include <bits/stdc++.h>
using namespace std;
int a[1005],c[1005]={0};
vector<char> v;
string s;
void display(){
    for(int i=1;i<=s.size();i++){
        cout << v[a[i]-1];
    }
    cout <<" ";
}
void Try(int i){
    for(int j=1;j<=s.size();j++){
        if(c[j]==0){
            a[i]=j;
            c[j]=1;
            if(i==s.size()) display();
            else Try(i+1);
            c[j]=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        for(int i=0;i<s.size();i++){
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        Try(1); 
        cout << endl;
        v.clear();
        memset(c,0,sizeof(c));
    }
}