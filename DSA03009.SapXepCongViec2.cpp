#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,x,res,cnt;
pair<int,int> a[1005];

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        res=0,cnt=0;
        map<int,int> mp;
        cin >> n;
        for(int i=0;i<n;i++) cin >> x >> a[i].first >> a[i].second;
        sort(a,a+n,cmp); // sắp xếp công việc giảm dần theo lợi nhuận
        for(int i=0;i<n;i++){   // xét từng công việc
            for(int j=a[i].first;j>0;j--){  //chọn thời điểm làm công việc
                if(!mp[j]){
                    res+=a[i].second;
                    cnt++;
                    mp[j]=1;
                    break;
                }    
            }
        }
        cout << cnt << " " << res << endl;
    }
}