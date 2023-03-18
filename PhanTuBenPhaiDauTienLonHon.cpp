#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],x[n];
        for(int i=0;i<n;i++) cin >> a[i];
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && a[i]>a[st.top()]){
                    x[st.top()]=a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            x[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<n;i++) cout << x[i] <<" ";
        cout << endl;
    }
}
