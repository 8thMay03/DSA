#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll p,q;
        cin >> p >> q;
        while(1){
            if(q%p==0) {
                cout <<"1/"<<q/p<<endl;
                break;
            }
            else{
                ll tmp=q/p+1;
                cout <<"1/"<<tmp<<" + ";
                p=p*tmp-q;
                q*=tmp;
            }
        }
    }
}