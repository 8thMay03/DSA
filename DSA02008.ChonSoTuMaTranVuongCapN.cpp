#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,k,a[1005][1005],tmp=0,col[1005]={0};
vector<int> v;
vector<vector<int>> vv;

void Try(int i){
    for(int j=1;j<=n;j++){
        if(!col[j]){
            col[j]=1;
            v.push_back(j);
            tmp+=a[i][j];
            if(tmp==k && v.size()==n) vv.push_back(v);
            else if(tmp<k) Try(i+1);
            tmp-=a[i][j];
            col[j]=0;
            v.pop_back();
        }
    }
}
int main(){
   cin >> n >> k;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
   }
   Try(1);
   cout << vv.size() << endl;
   for(auto v:vv){
        for(auto i:v) cout << i <<" ";
        cout << endl;
   }  
}