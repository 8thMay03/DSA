#include<bits/stdc++.h>
#define ll long long

using namespace std;

int degree(char x){
    if (x=='^') return 3;
    if (x=='*'||x=='/') return 2;
    if (x=='+'||x=='-') return 1;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s,res;
		cin >> s;
		stack<char> st;
		for(char c:s){
			if(isalpha(c)) res+=c;
			else if(c=='(') st.push(c);
			else if(c==')'){
				while(!st.empty() && st.top()!='('){
					res+=st.top();
					st.pop();
				}
				st.pop();
			}
			else if(degree(c)){
				while(!st.empty() && degree(st.top()) >= degree(c)){
					res+=st.top();
					st.pop();
				}
				st.push(c);
			}
		}
		while(!st.empty()){
			if(st.top()!='(') res+=st.top();
			st.pop();
		}
		cout << res << endl;
	}
}