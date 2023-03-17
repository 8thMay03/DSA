#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k,r=0; string s1,s2,res;
        cin >> k >> s1 >> s2;
        if(s2.size()>s1.size()) swap(s1,s2);
        while(s2.size()<s1.size()) s2="0"+s2;
        for(int i=s1.size()-1;i>=0;i--){
            int tmp=(s1[i]-'0')+(s2[i]-'0')+r;
            r=tmp/k;
            tmp%=k;
            res=(char)(tmp+'0')+res;
        }
        if(r>0) res="1"+res;
        cout << res << endl;
    }
}