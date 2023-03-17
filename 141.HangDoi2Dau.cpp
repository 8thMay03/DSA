#include<bits/stdc++.h>

using namespace std;

int main(){
   deque<int> dq;
   int t;
   cin >> t;
   while(t--){
        string s;
        cin >> s;
        if(s=="PUSHFRONT"){
            int n;
            cin >> n;
            dq.push_front(n);
        }
        if(s=="PUSHBACK"){
            int n;
            cin >> n;
            dq.push_back(n);
        }
        if(s=="PRINTFRONT"){
            if(dq.empty()) cout << "NONE";
            else cout << dq.front();
            cout << endl;
        }
        if(s=="PRINTBACK"){
            if(dq.empty()) cout << "NONE";
            else cout << dq.back();
            cout << endl;
        }
        if(s=="POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        if(s=="POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
   }
}