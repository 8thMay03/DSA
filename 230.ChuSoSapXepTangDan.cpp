#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod=1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,res=0;
        cin >> n;
        ll dp[n+5][15];   //dp[i][j] là số có các chữ số tăng dần có i chữ số, số lớn nhất là j
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=9;i++) dp[1][i]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<=9;j++){
                for(int k=0;k<=j;k++){          // Với số các số có i chữ số, số lớn nhất là j thì nó là số có i-1 chữ số, số lớn nhất không vượt quá j ghép với j ở cuối
                    dp[i][j]+=dp[i-1][k];       // Ta có dp[i][j] bằng tổng dp[i-1][k] với k chạy từ 0 đến j
                    dp[i][j]%=mod;
                }
            }
        }
        for(int i=0;i<=9;i++){
            res+=dp[n][i];
            res%=mod;
        }
        cout << res << endl;
    }
}