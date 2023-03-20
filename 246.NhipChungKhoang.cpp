#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5],x[n+5];
        vector<int> st;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++){
            if(st.empty()||a[i]<a[st.back()]) {
                st.push_back(i);
                x[i]=1;
            }
            else{
                while(a[i]>=a[st.back()] && !st.empty()) st.pop_back();
                x[i]=i-st.back();
                st.push_back(i);
            }
        }
        for(int i=1;i<=n;i++) cout << x[i] <<" ";
        cout << endl;
    }
}