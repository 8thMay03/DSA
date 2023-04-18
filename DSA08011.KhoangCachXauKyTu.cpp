#include<bits/stdc++.h>
#define ll long long

using namespace std;

set<string> st;

int bfs(string x,string y){
    if(x==y) return 0;
    queue<pair<string,int>> q;
    q.push({x,1});
    while(1){
        auto tmp=q.front();
        q.pop();
        for(int i=0;i<tmp.first.size();i++){
            string z=tmp.first;
            for(char j='A';j<='Z';j++){
                z[i]=j;
                if(st.find(z)!=st.end()){
                    if(z==y) return tmp.second+1;
                    q.push({z,tmp.second+1});
                    st.erase(z);
                }
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        st.clear();
        int n;
        cin >> n;
        string x,y;
        cin >> x >> y;
        for(int i=0;i<n;i++){
            string tmp;
            cin >> tmp;
            st.insert(tmp);
        }
        cout << bfs(x,y) << endl;
    }
}