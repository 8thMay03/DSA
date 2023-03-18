#include<bits/stdc++.h>

using namespace std;
int n,k,a[1005],c[1005],cnt=0;
bool check(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(a[i]*c[i]);
    }
    if(sum==k) return 1;
    return 0;
}
void display(){
    cout <<"[";
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(c[i]!=0) v.push_back(a[i]);
    }
    for(int i=0;i<v.size()-1;i++){
        cout << v[i]<<" ";
    }
    cout<< v.back()<<"] ";
}
void Try(int i){
    for(int j=1;j>=0;j--){
        c[i]=j;
        if(i==n){
            if(check()){
                display();
                cnt++;
            }
        }
        else Try(i+1);
    }
}
int main(){
    int t;
     cin >> t;
     while(t--){
       cin >> n >> k;
       for(int i=1;i<=n;i++) cin >> a[i];
       sort(a+1,a+n+1);
       Try(1);
       if(cnt==0) cout << -1 ;
       cnt=0;
       cout << endl;
     }
}