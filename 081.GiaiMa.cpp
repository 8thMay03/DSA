#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0]=='0') cout << 0;
        else{
            int n=s.size();
            int dp[n+5];
            dp[0]=dp[1]=1;
            for(int i=2;i<=n;i++){
                dp[i]=0;
                if(s[i-1]>'0') dp[i]=dp[i-1];                               //nếu ký tự thứ i-1 và i không tạo thành số từ 10 đến 26, ta chỉ có thể giải mã ký tự thứ i riêng lẻ. Do đó, chúng ta sẽ cộng thêm giá trị dp[i-1] vào dp[i].  
                if(s[i-2]=='1'||s[i-2]=='2' && s[i-1]<'7') dp[i]+=dp[i-2];  //Nếu ký tự thứ i-1 và i tạo thành một số từ 10 đến 26, ta có thể giải mã bằng cách ghép ký tự thứ i-1 và i vào cùng nhau, hoặc giải mã ký tự thứ i riêng lẻ. Do đó, chúng ta sẽ cộng thêm giá trị dp[i-2] vào dp[i].
            }
            cout << dp[n];
        }
        cout << endl;
    }
}