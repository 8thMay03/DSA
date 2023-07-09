#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>

using namespace std;

vector<ll> v;

bool find(ll k,string s){           //Tìm xem số k có ở trong xâu s không theo đúng thứ tự
    string x=to_string(k);
    int i=0,j=0;
    while(i<x.size() and j<s.size()){   //Tìm từ trái qua phải
        if(x[i]!=s[j]) j++;
        else i++,j++;
    }
    if(i==x.size()) return true;
    return false;
}

int main(){
    for(ll i=1e2;i>=0;i--) v.pb(i*i*i);
    int t;
    cin >> t;
    while(t--){
        int ok=0;
        string s;
        cin >> s;
        for(int i=0;i<v.size();i++){
            if(find(v[i],s)){
                ok=1;
                cout << v[i];
                break;
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}