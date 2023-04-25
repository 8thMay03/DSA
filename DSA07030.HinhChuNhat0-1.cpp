#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,res=0;
        cin >> n >> m;
        int a[n][m],r[m],l[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
                if(a[i][j] && i>=1) a[i][j]+=a[i-1][j];
            }
            stack<int> st;
            for(int j=0;j<m;j++){
                while(!st.empty() && a[i][st.top()]>a[i][j]){
                    r[st.top()]=j;
                    st.pop();
                }
                st.push(j);
            }
            while(st.size()){
                r[st.top()]=m;
                st.pop();
            }
            for(int j=m-1;j>=0;j--){
                while(!st.empty() && a[i][st.top()]>a[i][j]){
                    l[st.top()]=j;
                    st.pop();
                }
                st.push(j);
            }
            while(st.size()){
                l[st.top()]=-1;
                st.pop();
            }
            for(int j=0;j<m;j++){
                res=max(res,a[i][j]*(r[j]-l[j]-1));
            }
        }
        cout << res << endl;
    }
}