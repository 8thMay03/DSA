#include<bits/stdc++.h>
 using namespace std;
    int res(int a[],int n){
        int sum=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(sum)>abs(a[i]+a[j])){
                    sum=a[i]+a[j];
                }
            }
        }
        return sum;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            cout << res(a,n) << endl;
        }
    }
    