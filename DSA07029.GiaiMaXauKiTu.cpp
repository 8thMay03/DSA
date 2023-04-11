#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s,res,x;			// x để lưu hệ số
		stack<int> st;			// stack để lưu hệ số
		cin >> s;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])) x+=s[i];
			else if(isalpha(s[i])) res+=s[i];
			else if(s[i]=='['){					// Mỗi khi gặp dấu '[' thì đẩy hệ số vào stack, hệ số này sẽ tương ứng với biểu thức sau dấu '['
				if(x.size()) st.push(stoi(x));
				else st.push(1);
				x.clear();
				res+='[';
			}
			else if(s[i]==']'){
				string tmp;
				while(res.back()!='['){
					tmp=res.back()+tmp;
					res.pop_back();
				}
				res.pop_back();
				int heso=st.top();
				st.pop();
				while(heso--) res+=tmp;
			}
		}
		cout << res << endl;
	}
}