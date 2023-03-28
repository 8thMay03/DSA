#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s[2];
        cin >> s[0] >> s[1];
        stack<int> st[2];
        for(int i=0;i<=1;i++){
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]!=')') st[i].push(j);
                else {
                    while(s[i][st[i].top()]!='(') st[i].pop();
                    st[i].pop();
                    if(!st[i].empty()){
                        if(s[i][st[i].top()]=='-'){
                            for(int k=st[i].top()+1;k<=j;k++){
                                if(s[i][k]=='+') s[i][k]='-';
                                else if(s[i][k]=='-') s[i][k]='+';
                            }
                        }
                    }
                }
            }
            while(s[i].find('(')!=string::npos){
                s[i].erase(s[i].begin()+s[i].find('('));
            }
            while(s[i].find(')')!=string::npos){
                s[i].erase(s[i].begin()+s[i].find(')'));
            }
        }
        if(s[0]==s[1]) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}