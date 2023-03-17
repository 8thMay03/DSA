#include <bits/stdc++.h>
using namespace std;

int n,a[15][15],visited[15][15],ok;
string s;
void Try(int i,int j){
	if(i==n && j==n){
		ok=1;
		cout << s <<" ";
		return;
	}
	if(a[i+1][j] && !visited[i+1][j]){
		s+='D';
		visited[i+1][j]=1;
		Try(i+1,j);
		s.pop_back();
		visited[i+1][j]=0;
	}
	if(a[i][j-1] && !visited[i][j-1]){
		s+='L';
		visited[i][j-1]=1;
		Try(i,j-1);
		s.pop_back();
		visited[i][j-1]=0;
	}
	if(a[i][j+1] && !visited[i][j+1]){
		s+='R';
		visited[i][j+1]=1;
		Try(i,j+1);
		s.pop_back();
		visited[i][j+1]=0;
	}
	if(a[i-1][j] && !visited[i-1][j]){
		s+='U';
		visited[i-1][j]=1;
		Try(i-1,j);
		s.pop_back();
		visited[i-1][j]=0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ok=0;
		s="";
		memset(visited,0,sizeof(visited));
		memset(a,0,sizeof(a));
		cin >> n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin >> a[i][j];
			}
		}
		visited[1][1]=1;
		if(a[1][1]==0) cout << -1 ;
		else {
			Try(1,1);
			if(!ok) cout <<-1;
		}
		cout <<endl;
	}
}