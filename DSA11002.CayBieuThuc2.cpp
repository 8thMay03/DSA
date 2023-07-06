#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n; string a[150];

struct node{
    string data;
    node *left,*right;
};

typedef node *TREE;

TREE createNode(string s){
    TREE t = new node;
    t -> data = s;
    t -> left = NULL;
    t -> right = NULL;
    return t;
}

TREE buildTree(TREE t,int i){
    if(i<n){
        t = createNode(a[i]);
        t -> left = buildTree(t->left,i*2+1);
        t -> right = buildTree(t->right,i*2+2);
    }
    return t;
}

ll calc(TREE t){
    if(t->data!="+" and t->data!="-" and t->data!="*" and t->data!="/") return stoll(t->data);
    else if(t->data=="+") return calc(t->left)+calc(t->right);
    else if(t->data=="-") return calc(t->left)-calc(t->right);
    else if(t->data=="*") return calc(t->left)*calc(t->right);
    else if(t->data=="/") return calc(t->left)/calc(t->right);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        TREE root = new node;
        root = NULL;
        root = buildTree(root,0);
        cout << calc(root) << endl;
    }
}