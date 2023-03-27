#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int t;
    cin >> t;
    string s;
    int n;
    while(t--){
        cin >> s;
        if(s=="PUSH"){
            cin >> n;
            v.push_back(n);
        }
        if(s=="POP"){
            if(!v.empty()) v.pop_back();
        }
        if(s=="PRINT"){
            if(!v.empty()) cout << v.back() << endl;
            else cout <<"NONE" << endl;
        }
    }
}
