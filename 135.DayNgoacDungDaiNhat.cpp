#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        stack<int> st;
        st.push(-1);
        string s;
        cin >> s;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else{
                st.pop();
                if(!st.empty()){
                    res=max(res,i-st.top());
                }
                else st.push(i);
            }
        }
        cout << res << endl;
    }
}