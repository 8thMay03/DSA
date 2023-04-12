#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int,int> mp;
		stack<int> st;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++){
			while(!st.empty() && mp[a[st.top()]]<mp[a[i]]){
				b[st.top()]=a[i];
				st.pop();
			}
			st.push(i);
		}
		while(st.size()){
			b[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++) cout << b[i] <<" ";
		cout << endl;
	}
}