#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll a[51];
    for(int i=1;i<=50;i++) a[i]=(ll)pow(2,i)-1; //Lưu số phần tử của dãy số thứ i;
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        while(n>0){
            if(k==(ll)pow(2,n-1)){              
                cout << n << endl;
                break;
            }
            if(k>a[n-1]) k-=(ll)pow(2,n-1);         //xem k nằm ở nửa đầu hay nửa sau của dãy
            n--;
        }
    }
}