#include<bits/stdc++.h>

using namespace std;


int main() {
   int t;
   cin >> t;
   while(t--){
        int d,s;
        cin >> s >> d;
        stack<int> st;
        if(d*9<s) cout <<-1;
        else{
            while(s>9 && d>=2){
                s-=9;
                st.push(9);
                d--;
            }
            if(d>1){
                st.push(s-1);
                s=1;
                d--;
                while(d>1){
                    st.push(0);
                    d--;
                }
            }
            st.push(s);
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
        }
        cout << endl;
   }
}