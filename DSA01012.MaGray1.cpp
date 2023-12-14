#include <bits/stdc++.h>
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vvi vector<vi>
#define vvl vector<vll>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mii map<int, int>
#define mll map<ll, ll>
#define faster() ios::sync_with_stdio(false); cin.tie(0);
 
using namespace std;
 
template <typename T> istream& operator>>(istream& in, vector<T>& vec){for (T& element : vec) in >> element; return in;}
template <typename T> ostream& operator<<(ostream& out, vector<T>& vec){for (T& element : vec) out << element << endl; return out;}
template <typename T> ostream& operator<<(ostream& out, set<T>& st){for (const T& element : st) out << element << " "; return out;}
 
int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1) cout << 0 << endl << 1;
        else{
            n--;
            vs gray;
            gray.pb("0");
            gray.pb("1");
            while(n--){
                vs tmp = gray;
                for(int i = 0; i < (int)gray.size(); i++){
                    gray[i] = "0" + gray[i];
                }
                reverse(all(tmp));
                for(string s: tmp) gray.pb("1" + s);
            }
            cout << gray;
        }
        cout << endl;
    }
}