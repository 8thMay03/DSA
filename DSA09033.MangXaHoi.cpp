#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,x,y,ok=1;
        cin >> n >> m;
        set<int> ke[n+1];
        while(m--){
            cin >> x >> y;
            ke[x].insert(y);
            ke[y].insert(x);
        }
        for(int i=1;i<=n;i++){                                      //Kiểm tra bạn của i là j, j có bạn k nào là bạn của i không
            for(int j:ke[i]){
                for(int k:ke[j]){
                    if(!ke[i].count(k) && i!=k){
                        ok=0;
                        break;
                    }
                }
            }
        }
        if(ok) cout <<"YES";
        else cout <<"NO";
        cout << endl;
    }
}