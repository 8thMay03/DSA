#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<char> st;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            string s=to_string(a[i]);
            for(int i=0;i<s.size();i++){
                st.insert(s[i]);
            }
        }
        for(auto i:st){
            cout << i <<" ";
        }
        cout << endl;
    }
}