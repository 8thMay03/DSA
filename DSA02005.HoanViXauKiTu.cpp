#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define psi pair<string,int>
#define fi first
#define se second
#define vi vector<int>
#define pb(x) push_back(x)
#define pop pop_back();

using namespace std;

string s;

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        sort(s.begin(),s.end());
        cout << s <<" ";
        while(next_permutation(s.begin(),s.end())){
            cout << s <<" ";
        }
        cout << endl;
    }
}