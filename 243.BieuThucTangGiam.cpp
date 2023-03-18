#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s,tmp="";
        cin >> s;
        stack<int> st;
        for(int i=0;i<=s.size();i++){
            st.push(i+1);
            if(i==s.size()||s[i]=='I'){
                while(!st.empty()){
                    tmp+=to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << tmp << endl;
    }
}