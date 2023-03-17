    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    bool cmp(pair<int,int> a,pair<int,int> b){
        if(a.first==b.first) return a.second<b.second;
        return a.first<b.first;
    }
    int main(){
        int n;
        cin >> n;
        int a[n+1][n+1]={0};
        cin.ignore();
        for(int i=1;i<=n;i++){
            string s;
            getline(cin,s);
            stringstream ss(s);
            string tmp;
            while(ss>>tmp){
                a[i][stoi(tmp)]=1;
                a[stoi(tmp)][i]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << a[i][j] <<" ";
            }
            cout << endl;
        }
    }