#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> st;
        vector<int> v;
        int n;
        cin >> n;
        int x;
        for(int i=0;i<n ;i++) {
            cin >> x;
            st.insert(x);
        }
        for(auto i:st) v.push_back(i);
        if(v.size()==1) cout << "-1";
        else cout << v[0] <<" "<< v[1];
        cout << endl;
    }
}