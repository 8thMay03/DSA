#include<bits/stdc++.h>
 using namespace std;
bool check(int a){
    if(a<=1) return 0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,cnt=0;
        cin >> n;
        for(int i=2;i<=n/2;i++){
            if(check(i)){
                if(check(n-i)){
                    cout << i <<" "<<n-i;
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==0) cout << -1;
        cout << endl;
    }
}