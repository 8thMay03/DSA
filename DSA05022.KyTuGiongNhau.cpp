#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y,z,res=INT_MAX;
        cin >> n >> x >> y >> z;
        int dp[n+1];
        dp[1]=x;
        for(int i=2;i<=n;i++){
            if(i%2==0) dp[i]=min(dp[i/2]+z,dp[i-1]+x);  // Chọn giữa việc copy và insert nếu i%2==0
            else dp[i]=min(dp[(i+1)/2]+y+z,dp[i-1]+x); // Ngược lại thì phải lấy ra số bước tạo thành i+1 là số bước tạo ra (i+1)/2 +1, cộng thêm 1 là 1 lần xóa để ra i
        }
        cout << dp[n] << endl;
    }
}