#include<bits/stdc++.h>

using namespace std;


int main(){
    int a,b,max,min;
    cin >> a >> b;
    string s1=to_string(a);
    string s2=to_string(b);
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='5') s1[i]='6';
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='5') s2[i]='6';
    }
    max=stol(s1)+stol(s2);
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='6') s1[i]='5';
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='6') s2[i]='5';
    }
    min=stol(s1)+stol(s2);
    cout << min<<" "<<max;
}