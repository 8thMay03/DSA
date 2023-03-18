#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,a[1005],b[1005],tmp;
bool check(){                       //Kiểm tra xem đúng yêu cầu đề bài chưa
    for(int i=0;i<n-1;i++){
        if((a[i]/b[i])!=(a[i+1]/b[i+1])) return false;
    }
    return true;
}
void solve(){                       
    for(int i=0;i<n;i++) b[i]=a[i]/tmp;
    while(!check()){                    // Tìm số lớn nhất mà khi lấy các số trong dãy chia cho nó ra các số có phần nguyên bằng nhau, bắt đầu từ số nhỏ nhất của dãy
        tmp--;
        for(int i=0;i<n;i++) b[i]=a[i]/tmp;
    }                                   
    for(int i=0;i<n;i++){               // Sau khi tìm ra rồi thì ta giảm các số trong dãy nhỏ nhất nhưng phần nguyên của phép chia vẫn như cũ
        while(a[i]/b[i]==tmp){
            b[i]--;
        }
        b[i]++;
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    tmp=*min_element(a,a+n);
    solve();
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=b[i];
    }
    cout << sum;
}


