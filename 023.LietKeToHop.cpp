#include <bits/stdc++.h>
using namespace std;
int n,k,b[1005]={0};
set<int> st;
vector<int> v;
void display(){
    for(int i=1;i<=k;i++){
        cout << v[b[i]-1]<<" ";
    }
    cout << endl;
}
void Try(int i){
    for(int j=b[i-1]+1;j<=v.size()-k+i;j++){
        b[i]=j;
        if(i==k) display();
        else Try(i+1);
    }
}
int main() {
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    for(auto i:st){
        v.push_back(i);
    }
    Try(1);
}