#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<int,int> mp;
        set<int> st;
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
            st.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            mp[b[i]]++;
            st.insert(b[i]);
        }
        for(auto i:st) cout <<i <<" ";
        cout << endl;
        for(auto i:st){
            if(mp[i]==2) cout << i <<" ";
        }
        cout << endl;
    }
}