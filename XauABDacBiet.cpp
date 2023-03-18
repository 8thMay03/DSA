#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> v;
char a[1005];
int n,k,t;
bool check(){
    int tmp=0;                                  //Đếm số dãy chứa k chữ 'A' liên tiếp
    for(int i=1;i<=n-k+1;i++){
        int cnt=0;
        if(a[i]=='A'){
            for(int j=i;j<=k+i-1;j++){          // Xét từ vị trí j đến k phần tử tiếp theo xem có bao nhiêu chữ 'A'
                if(a[j]=='A') cnt++;            
            }
            if(cnt==k){                         // Nếu có k số thì tiếp tục vòng sau, tăng biến đếm số dãy chứa k chữ A liên tiếp
                tmp++;
                continue;
            }
        }
    }
    if(tmp==1) return true;
    return false; 
}

void Try(int i){
    for(char j='A';j<='B';j++){
        a[i]=j;
        if(i==n){
            if(check()){
                t++;
                string s;
                for(int i=1;i<=n;i++){
                    s+=a[i];
                }
                v.push_back(s);
            }
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    Try(1);
    cout << t <<endl;
    for(auto i:v) cout <<i <<endl; 
}