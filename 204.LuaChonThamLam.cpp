#include<bits/stdc++.h>

using namespace std;


    int main() {
        stack<int> st;          //Lưu SNN
        vector<int> v;          //Lưu SLN
        int n,s;
        cin >> n >> s;
        if(9*n<s||n<=0||s<=0) cout <<"-1 -1";
        else{
            int tong=s,d=n;
            while(tong>9 && d>=2){
                st.push(9);
                tong-=9;
                d--;
            }
            if(d>1){
                st.push(tong-1);
                tong=1;
                d--;
                while(d>1){
                    st.push(0);
                    d--;
                }
            }
            st.push(tong);
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
            cout <<" ";
            while(s>=9){
                v.push_back(9);
                s-=9;
                n--;
            }
            v.push_back(s);
            n--;
            while(n--){
                v.push_back(0);
            }
            for(auto i:v) cout<<i;
        }
        cout << endl;
   }