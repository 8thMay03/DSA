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
            if(s[i]!=')') st.push(i);
            else{
                while(s[st.top()]!='(') st.pop();
                st.pop();
                if(!st.empty()){
                    if(s[st.top()]=='-'){
                        for(int j=st.top()+1;j<i;j++){
                            if(s[j]=='-') s[j]='+';
                            else if(s[j]=='+') s[j]='-';
                        }
                    }
                }
            }
        }
        while(s.find('(')!=string::npos){
            s.erase(s.begin()+s.find('('));
        }
        while(s.find(')')!=string::npos){
            s.erase(s.begin()+s.find(')'));
        }
        cout << s << endl;
    }
}