#include <bits/stdc++.h>
using namespace std;
int n,a[1005];

int main(){
    int cnt=0;
    multiset<int> st;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        st.insert(a[i]);
        cout <<"Buoc "<<cnt++<<": ";
        for(auto i:st) cout <<i <<" ";
        cout << endl;
    }
}