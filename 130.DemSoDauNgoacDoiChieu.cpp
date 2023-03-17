#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt1=0,cnt2=0;
        stack<char> st;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
           if(st.empty()||s[i]=='(') st.push(s[i]);
           else if(s[i]==')') {
                if(st.top()=='(') st.pop();
                else st.push(s[i]);
           }
        }
        while(!st.empty()){
            if(st.top()=='(') cnt1++;
            else cnt2++;
            st.pop();
        }
        int res=cnt1/2+cnt2/2+cnt1%2+cnt2%2;
        cout << res << endl;
    }
}