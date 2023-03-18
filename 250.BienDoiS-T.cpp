#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s,t,dp[10005];
        cin >> s >> t;
        if(s>t) cout << s-t << endl;
        else{
            for(int i=0;i<=s;i++) dp[i]=s-i;
            for(int i=s+1;i<=t;i++){
                if(i%2==0) dp[i]=dp[i/2]+1; // Nếu i chia hết cho 2 thì số bước sẽ là số bước biến đổi ra của [i/2] cộng thêm 1 là 1 lần nhân 2
                else dp[i]=dp[(i+1)/2]+2;   // Ngược lại thì sẽ la số bước biến đổi ra [(i+1)/2] cộng 1 lần nhân 2, 1 lần trừ 1
            }
            cout << dp[t] << endl;
        }
        cout << endl;
    }
}