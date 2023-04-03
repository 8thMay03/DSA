#include <bits/stdc++.h>

using namespace std;

int n;
string s;
stack<int> st;
set<string> res;
vector<pair<int,int>> vp;
vector<vector<int>> vv;
vector<int> v;

void Try(int i){            // lưu các tổ hợp
    for(int j=i;j<vp.size();j++){
        v.push_back(j);
        if(v.size()==n) vv.push_back(v);
        else if(v.size()<n) Try(j+1);
        v.pop_back();
    }
}

int main(){
    cin >> s;
    for(int i=0;i<s.size();i++){        // Lưu các cặp dấu ngoặc
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            pair<int,int> p;
            p.first = st.top();
            p.second = i;
            vp.push_back(p);
            st.pop();
        }
    }                               
    for(int i=1;i<=vp.size();i++){    // Coi các tập dấu ngoặc như là 1 phần tử. Xóa các tập dấu ngoặc theo tổ hợp chập i của vp.size();
        n=i;
        Try(0);
        for(vector<int> v:vv){          // xét từng tổ hợp
            map<int,int> mp;
            for(int j:v){               // Đánh dấu các vị trí dấu ngoặc cần xóa
                mp[vp[j].first]=1;
                mp[vp[j].second]=1;
            }
            string tmp;
            for(int k=0;k<s.size();k++){
                if(!mp[k]) tmp+=s[k];
            }
            res.insert(tmp);
        }
    }
    for(auto i:res) cout << i << endl;
}