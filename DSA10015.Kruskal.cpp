#include<bits/stdc++.h>
using namespace std;

int n,m,dh;

struct edge{
    int u,v,w;  // u là đỉnh đầu, v là đỉnh cuối, w là trọng số
};

bool cmp(edge a,edge b){
    return a.w < b.w;
}

int find(int u,vector<int>& parent){    // Tìm gốc của đỉnh
    if(u==parent[u]) return u;
    while(u!=parent[u]){
        u=parent[u];
    }
    return u;
}

void add(int u,int v,vector<int>& parent){  //Thêm cạnh vào cây khung
    int rootU=find(u,parent), rootV=find(v,parent);
    parent[rootU]=rootV;
}

bool isinsametree(int u,int v,vector<int>& parent){ //kiểm tra xem 2 đỉnh chung cây khung
    return find(u,parent)==find(v,parent);
}

void solve(vector<edge>& edges,vector<edge>& res){  // tìm cây khung nhỏ nhất
    sort(edges.begin(),edges.end(),cmp);
    vector<int> parent(105);
    for(int i=1;i<=n;i++) parent[i]=i;
    for(edge e:edges){
        if(!isinsametree(e.u,e.v,parent)){
            res.push_back(e);
            add(e.u,e.v,parent);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        dh=0;
        cin >> n >> m;
        vector<edge> edges(m+1),res;
        for(int i=1;i<=m;i++){
            cin >> edges[i].u >> edges[i].v >> edges[i].w;
        }   
        solve(edges,res);
        for(edge e:res) dh+=e.w;
        cout << dh << endl;
    }
}