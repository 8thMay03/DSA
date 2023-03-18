#include<bits/stdc++.h>

using namespace std;

set<int> st;
int n,k,a[1005];

bool check(){
    for(int i=1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

int main(){
   int t;
   cin >> t;
   while(t--){
        st.clear();
        cin >> n >> k;
        for(int i=1;i<=k;i++) cin >> a[i];
        if(check()){
        cout << k << endl;
        }   
        else{
            for(int i=1;i<=k;i++) st.insert(a[i]);
            int i=k;
            while(a[i]==n-k+i) i--;
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
            for(int i=1;i<=k;i++) st.insert(a[i]);
            cout << st.size()-k << endl;
        }
   }
}