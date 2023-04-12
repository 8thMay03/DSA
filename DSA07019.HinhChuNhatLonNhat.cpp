#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,res=0;
		cin >> n;
		stack<ll> st;
		vector<ll> a(n),r(n),l(n);
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){	// Tìm cột nhỏ hơn đầu tiên bên phải
			while(!st.empty() && a[i]<a[st.top()]){
				r[st.top()]=i; st.pop();
			}	
			st.push(i);
		}
		while(st.size()){		//Những cột mà không có cột nhỏ hơn bên phải thì coi cột cần tìm là n
			r[st.top()]=n;
			st.pop();
		}
		for(int i=n-1;i>=0;i--){	//Tìm cột nhỏ hơn đầu tiên bên trái
			while(!st.empty() && a[i]<a[st.top()]){
				l[st.top()]=i; st.pop();
			}	
			st.push(i);
		}
		while(st.size()){		//Những cột mà không có cột nhỏ hơn bên phải thì coi cột cần tìm là -1
			l[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++) res=max(res,(r[i]-l[i]-1)*a[i]);	//Diện tích sẽ tính tử bên phải của cột bên trái và bên trái của cột bên phải 1 đơn vị nhân chiều cao cột đang xét
		cout << res << endl;
	}
}