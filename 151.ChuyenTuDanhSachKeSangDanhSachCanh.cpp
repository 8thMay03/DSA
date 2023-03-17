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
        cin.ignore();
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++){
            string s;
            getline(cin,s);
            stringstream ss(s);
            string tmp;
            while(ss>>tmp){
                v.push_back(make_pair(i,stoi(tmp)));
            }
        }
        sort(v.begin(),v.end(),cmp);
        for(auto i:v) {
            if(i.second>i.first) cout << i.first<<" "<<i.second<<endl;
        }
    }