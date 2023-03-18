#include <bits/stdc++.h>
using namespace std;
int n,k,a[1005]={0};
vector<string> v;
set<string> st;
void display(){
    for(int i=1;i<=k;i++){
        cout << v[a[i]-1]<<" ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=st.size()-k+i;j++){
        a[i]=j;
        if(i==k) display();
        else Try(i+1);
    }
}
int main(){
   cin >> n >> k;
   string s;
   for(int i=0;i<n;i++){
    cin >> s;
    st.insert(s);
   }
   for(auto i:st){
    v.push_back(i);
   }
   Try(1);
}