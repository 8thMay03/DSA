#include <bits/stdc++.h>
using namespace std;
int a[100][100],n,check;
string s;
void Try(int i,int j){
    if(i==n && j==n){
        check=1;
        cout << s <<" ";
        return;
    }
    if(a[i+1][j]){
        s+='D';
        Try(i+1,j);
        s.pop_back();
    }
    if(a[i][j+1]){
        s+='R';
        Try(i,j+1);
        s.pop_back();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        check=0;
        cin >> n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        if(a[1][1]==0) cout <<-1;
        else{
            Try(1,1);
            if(check==0) cout <<-1;
        }
        cout << endl;
    }
}