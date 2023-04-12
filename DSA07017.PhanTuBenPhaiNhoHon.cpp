#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=1e6+5;

int a[N],b[N],c[N],n;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		stack<int> st;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++){				// Lưu vị trí của phần tử lớn hơn bên phải vào mảng b
			if(st.empty()) st.push(i);
			else{
				while(st.size() && a[st.top()]<a[i]){
					b[st.top()]=i;
					st.pop();
				}
				st.push(i);
			}
		}
		while(st.size()){
			b[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++){					// Lưu giá trị phần tử nhỏ hơn bên phải vào mảng c
			if(st.empty()) st.push(i);
			else{
				while(st.size() && a[st.top()]>a[i]){
					c[st.top()]=a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(st.size()){
			c[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;i++){
			if(b[i]==-1) cout << -1 <<" ";
			else cout << c[b[i]] <<" ";
		}
		cout << endl;
	}
}