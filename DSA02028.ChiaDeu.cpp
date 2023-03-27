#include<bits/stdc++.h>
using namespace std;

int n,k,sum=0,res=0,a[15]={0},s[15]={0},p[15]={0};

void Try(int i){
    for(int j=p[i-1]+1;j<=n;j++){
        p[i]=j;
        if(s[p[i]]-s[p[i-1]]==sum){
            if(i==k && p[k]-p[0]==n) res++;
            else if(i<k) Try(i+1);
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum+=a[i];
        s[i]=sum;
    }
    if(sum%k) res=0;
    else{
        sum/=k;
        Try(1);
    }   
    cout << res;
}