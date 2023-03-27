#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue<int,vector<int>, greater<int>> pq;
        ll n,res=0,tmp;
        cin >> n;
        while(n--){
            int x;
            cin >> x;
            pq.push(x);
        }
        while(pq.size()>1){
            tmp=pq.top();
            pq.pop();
            tmp+=pq.top();
            pq.pop();
            pq.push(tmp);
            res+=(tmp);
        }
        cout << res << endl;
    }
}