#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll cnt;
void merge(ll a[],ll l,ll m,ll r){
    ll n1=m-l+1,n2=r-m;
    ll L[n1],R[n2];
    for(ll i=0;i<n1;i++) L[i]=a[l+i];
    for(ll i=0;i<n2;i++) R[i]=a[m+i+1];
    ll i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else {
            a[k++]=R[j++];
            cnt+=(n1-i);
        }
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergesort(ll a[],ll l,ll r){
    if(l<r){
        ll m=(l+r-1)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt=0;
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        mergesort(a,0,n);
        cout << cnt << endl;
    }
}