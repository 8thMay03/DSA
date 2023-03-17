#include<bits/stdc++.h>

using namespace std;

int check(string s,int d){
    int n=s.size();
    unordered_map<char,int> mp;
    for(auto c:s) mp[c]++;
    for(auto c:s){
        if(mp[c]*d>n+1) return -1;  // Nếu số lần xuất hiện của kí tự c lớn hơn (n+1)/d thì ko đủ chỗ để xếp c kí tự vào n chỗ trống
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s; int d;
        cin >> d >> s;
        cout << check(s,d) << endl;
    }
}
