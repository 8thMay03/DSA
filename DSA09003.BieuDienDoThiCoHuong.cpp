    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long

    int main(){
        int t;
        cin >> t;
        while(t--){
            vector<pair<int,int>> v;
            int n,e;
            cin >> n >> e;
            for(int i=0;i<e;i++){
                int x,y;
                cin >> x >> y;
                v.push_back(make_pair(x,y));
            }
            for(int i=1;i<=n;i++){
                cout<<i<<": ";
                for(auto j:v){
                    if(j.first==i) cout << j.second <<" ";
                }
                cout << endl;
            }
        }
    }