#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m,res=0;
        cin >> n >> s >> m;
        if(m>n) res=-1;
        else if(m*7>n*6) res=-1;
        else{
            res=m*s/n;
            if((double)m*s/n>res) res++;
        }
        cout << res << endl;
    }
}
