#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n,a[25];
vector<int> v;
set<vector<int>> st;
bool cmp(int a,int b){
    return a>b;
}
bool snt(int n){
    if(n<=1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
bool check(){
    int sum=0;
    for(auto i:v) sum+=i;
    return snt(sum);
}

void Try(int i){
    for(int j=i;j<=n;j++){
        v.push_back(a[j]);
        if(check()) st.insert(v);
        Try(j+1);
        v.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        st.clear();
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        sort(a+1,a+1+n,cmp);
        Try(1);
        for(auto i:st){
            for(auto j:i){
                cout << j <<" ";
            }
            cout << endl;
        }
    }
}