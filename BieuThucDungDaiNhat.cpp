#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res=0;
        while(s.find("()")!=string::npos){
            auto it=s.find("()");
            s.erase(s.begin()+it,s.begin()+it+2);
            res+=2;
        }
        cout<< res <<endl;
    }
}