#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) st.push(s[i]-'0');
            else{
                int a,b;
                a=st.top(); st.pop();
                b=st.top(); st.pop();
                if(s[i]=='+') st.push(b+a);
                else if(s[i]=='-') st.push(b-a);
                else if(s[i]=='*') st.push(b*a);
                else if(s[i]=='/') st.push(b/a);
            }
        }
        cout <<st.top() << endl;
    }
}