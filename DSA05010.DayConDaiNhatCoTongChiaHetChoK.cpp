#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+1],dp[n+1][k];
		for(int i=1;i<=n;i++){
			cin >> a[i];
			a[i]%=k;
		}
		for(int i=1;i<=n;i++){
			for(int j=0;j<k;j++){
				dp[i][j]=-2;
			}
		}
		dp[1][a[1]]=1;
		for(int i=2;i<=n;i++){
			for(int j=0;j<k;j++){
				dp[i][j]=max(dp[i-1][j],dp[i-1][(j+k-a[i])%k]+1);
			}
		}
		cout << dp[n][0] << endl;
	}
}