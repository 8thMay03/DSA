#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool check(string s){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]<s[i+1]) return false;
    }
    return true;
}

string solve(string s,int k){
    if(check(s) or !k) return s;
    int i=0,idx;                                    
    while(!check(s) && k>0 && i < s.size()){            
        char max=s[i];
        for(int j=i+1;j<s.size();j++) if(max<s[j]) max=s[j];            //Tìm giá trị lớn nhất tính từ i trở đi rồi đổi chỗ s[i] và s[idx]
        if(max==s[i]) i++;                                              // Nếu s[i] là số lớn nhất thì không cần đổi
        else{
            for(int j=s.size()-1;j>=i;j--){
                if(s[j]==max){
                    idx=j;
                    break;
                }
            }
            swap(s[i],s[idx]);
            k--; i++;
        }
    }
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; int k;
        cin >> k >> s;
        cout <<  solve(s,k) << endl;
    }
}