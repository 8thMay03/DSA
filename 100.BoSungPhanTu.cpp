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
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        for(auto i:st){
            v.push_back(i);
        }
        cout << v[v.size()-1] - v[0] + 1 - v.size() << endl;
    }
}