#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n,x,y; char z;

struct node{
    int data;
    node *left,*right;
};

typedef node *TREE;

TREE createNode(int s){
    TREE t = new node;
    t -> data = s;
    t -> left = NULL;
    t -> right = NULL;
    return t;
}

void buildTree(TREE &t,int par,int child,char c){
    if(t!=NULL){
        if(t->data == par){
            if(c=='L') t->left=createNode(child);
            else if(c=='R') t->right=createNode(child);
        }
        buildTree(t->left,par,child,c);
        buildTree(t->right,par,child,c);
    }
}

void level_ordered(TREE &t){
    queue<TREE> q;
    TREE top;
    q.push(t);
    while(q.size()){
        top = q.front();
        q.pop();
        cout << top->data <<" ";
        if(top->left!=NULL) q.push(top->left);
        if(top->right!=NULL) q.push(top->right);
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x >> y >> z;
        TREE root = new node;
        root = NULL;
        root = createNode(x);
        buildTree(root,x,y,z);
        for(int i=1;i<n;i++){
            cin >> x >> y >> z;
            buildTree(root,x,y,z);
        }
        level_ordered(root);
    }
}