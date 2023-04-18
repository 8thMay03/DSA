#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct pt{
	int heso,mu;
};

map<int,int> mp;
vector<pt> vv,res;
vector<int> v;

bool cmp(pt a,pt b){
	return a.mu > b.mu;
}

void pb(string s){
	int tmp=0;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])) tmp=tmp*10+s[i]-'0';
		if(s[i]=='*'||s[i]==' '||i==s.size()-1) {
			v.push_back(tmp); tmp=0;
			if(s[i]==' ') i+=2;
		}
	}
	for(int i=0;i<v.size();i+=2){
		pt a;
		a.heso=v[i], a.mu=v[i+1];
		vv.push_back(a);
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		v.clear(); mp.clear(); vv.clear(); res.clear();
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		pb(s1);
		v.clear();
		pb(s2);
		for(int i=0;i<vv.size();i++) mp[vv[i].mu]+=vv[i].heso;
		for(auto i:mp) {
			pt a;
			a.heso=i.second;
			a.mu=i.first;
			res.push_back(a);
		}
		sort(res.begin(),res.end(),cmp);
		for(int i=0;i<res.size();i++){
			if(i!=res.size()-1) cout << res[i].heso << "*x^" << res[i].mu <<" + ";
			else cout << res[i].heso << "*x^" << res[i].mu;
		}
		cout << endl;
	}
}