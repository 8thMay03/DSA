#include <bits/stdc++.h>
#define ll long long

using namespace std;


vector<ll> v;

bool find(ll k,string s){         //Tìm xem số k có ở trong xâu s hay không
    string tmp=to_string(k);
    map<char,int> mp;
    ll i=0,j=0;
    for(char c:tmp) mp[c]++;                    // Đánh dấu số lần xuất hiện của từng số của k
    while(i<=tmp.size() && j<=s.size()){         // Duyệt k và xâu s, nếu có 2 kí tự giống nhau thì trừ số lần xuất hiện đi
        if(tmp[i]==s[j]){                           
            mp[tmp[i]]--;
            i++;j++;
        }
        else j++;
    }
    for(char c:tmp) if(mp[c]) return false;     // Sau khi duyệt, nếu số k xuất hiện trong xâu thì số lần xuất hiện của các số đã bị trừ về 0, ngược lại thì return false
    return true;
}
 
int main(){
    for(ll i=1e2;i>=0;i--) v.push_back(i*i*i);
    int t;
    cin >> t;
    while(t--){
        int ok=0;
        string s;
        cin >> s;
        for(int i=0;i<v.size();i++){
            if(find(v[i],s)){
                ok=1;
                cout << v[i];
                break;
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}