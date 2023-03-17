#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    string s;
    int n;
    while(cin >> s){
        if(s=="push"){
            cin >> n;
            v.push_back(n);  
        }
        if(s=="show"){
            if(v.empty()){
                cout << "empty";
            }
            else for(int i:v) cout << i <<" ";
            cout << endl;
        }
        if(s=="pop"){
            v.pop_back();
        }
    }
}
