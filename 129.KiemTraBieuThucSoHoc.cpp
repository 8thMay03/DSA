#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int ok;
        string s;
        getline(cin,s);
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=')'){
                st.push(s[i]);
            }
            else{
                ok=0;
                char tmp=st.top(); st.pop();
                while(tmp!='('){
                    if(tmp=='+'||tmp=='-'||tmp=='*'||tmp=='/') ok=1;
                    tmp=st.top();
                    st.pop();
                }
                if(!ok) break;
            }
        }
        if(!ok) cout <<"Yes";
        else cout <<"No";
        cout << endl;
    }
}