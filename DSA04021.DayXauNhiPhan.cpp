#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll a[93];
void fb(){
    a[1]=1;
    a[2]=1;
    for(int i=3;i<93;i++){
        a[i]=a[i-2]+a[i-1];
    }
}
int main(){
    fb();
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        while(n>=3){
            if(k > a[n-2]){
                k-= a[n-2];
                n--;
            }
            else{
                n-=2;
            }
        }
        if(n==1) cout <<"0";
        if(n==2) cout <<"1";
        cout << endl;
    }
}

/*#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fb[93]={0,1,1};

char solve(ll n,ll k){
	if(n==1 && k==1) return '0';
	if(n==2 && k==1) return '1';
	if(k>fb[n-2]) return solve(n-1,k-fb[n-2]);
	return solve(n-2,k);
}

int main(){
	for(int i=3;i<=93;i++) fb[i]=fb[i-1]+fb[i-2];
	int t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >>k;
		cout << solve(n,k) << endl;
	}
}*/
