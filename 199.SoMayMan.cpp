#include <bits/stdc++.h>
using namespace std;

int n;

void solve(){
	int a=0,b=0;
	while(n>0){
		if(n%7==0){
			n-=7;
			b++;
		}
		else if(n%4==0){
			n-=4;
			a++;
		}
		else{
			a++;
			n-=4;
		}
	}
	if(n<0) cout << -1;
	else {
		while(a--) cout << 4;
		while(b--) cout << 7; 
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve();
	}
}