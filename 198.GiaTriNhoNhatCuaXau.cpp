#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue<int> pq;
        map<char,int> mp;
        int n,sum=0;
        string s;
        cin >> n >> s;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        for(auto i:mp) pq.push(i.second);
        while(n--){
            int tmp=pq.top()-1;
            pq.pop();
            pq.push(tmp);
        }
        while(!pq.empty()) {
            sum+=(pq.top()*pq.top());
            pq.pop();
        }
        cout << sum << endl;
    }
}
