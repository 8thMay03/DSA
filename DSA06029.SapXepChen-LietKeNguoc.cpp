#include <bits/stdc++.h>
using namespace std;
int n,a[1005];

int main(){
    vector<string> v;
    int cnt=0;
    multiset<int> st;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> a[i];
        st.insert(a[i]);
        s+=s+"Buoc "+to_string(cnt++)+": ";
        for(auto i:st) s=s+to_string(i)+" ";
        v.push_back(s);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i] << endl;
    }
}