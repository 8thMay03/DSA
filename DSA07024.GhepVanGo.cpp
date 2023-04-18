#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,res=0;
		cin >> n;
		int a[n],r[n],l[n];
		for(int i=0;i<n;i++) cin >> a[i];
		stack<int> st;
		for(int i=0;i<n;i++){
			while(st.size() && a[st.top()]>a[i]){
				r[st.top()]=i;
				st.pop();
			}
			st.push(i);
		}
		while(st.size()){
			r[st.top()]=n;
			st.pop();
		}
		for(int i=n-1;i>=0;i--){
			while(st.size() && a[st.top()]>a[i]){
				l[st.top()]=i;
				st.pop();
			}
			st.push(i);
		}
		while(st.size()){
			l[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++) if(r[i]-l[i]-1>=a[i]) res=max(res,a[i]);
		cout << res << endl;
	}
}