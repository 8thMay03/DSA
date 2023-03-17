#include<bits/stdc++.h>
 using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       queue<int> q;
       int n;
       cin >> n;
       while(n--){
            int k;
            cin >> k;
            if(k==1){
                cout << q.size() << endl;
            }
            if(k==2){
                if(q.empty()) cout<<"YES";
                else cout <<"NO";
                cout << endl;
            }
            if(k==3){
                int m;
                cin >> m;
                q.push(m);
            }
            if(k==4){
                if(!q.empty()) q.pop();
            }
            if(k==5){
                if(!q.empty()) cout<<q.front();
                else cout << -1;
                cout << endl;
            }
            if(k==6){
                if(!q.empty()) cout<<q.back();
                else cout << -1;
                cout << endl;
            }
       }
    }
}