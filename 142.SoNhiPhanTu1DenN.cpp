#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n){
    stack<int> st;
    while(n>0){
        st.push(n%2);
        n/=2;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            solve(i);
            cout <<" ";
        }
        cout << endl;
    }
}
/*
#include<bits/stdc++.h>

using namespace std;

vector<string> v;
queue<string> q;
void np(){
    v.push_back("@");
    v.push_back("1");
    q.push("1");
    while(v.size()<10000){
        string tmp=q.front();
        q.pop();
        v.push_back(tmp+"0");
        v.push_back(tmp+"1");
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
}
int main() {
    np();
	int t;
	cin >> t;
	while (t--) {
		int n;
        cin >> n;
        for(int i=1;i<=n;i++) cout << v[i] <<" ";
        cout << endl;
	}
}
*/