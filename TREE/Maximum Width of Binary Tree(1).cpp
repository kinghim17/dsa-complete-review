//through BFS
#include <bits/stdc++.h>
using namespace std;

struct Node{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int maxWidth(Node *root){
    if(root==NULL)return 0;
    queue<Node *>q;
    q.push(root);
    int res=0;
    while(q.empty()==false){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    return res;
}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	
	cout<<maxWidth(root);
}
//through DFS
class Solution {
public:
    typedef unsigned long long ll;
    
    void DFS(TreeNode* root, ll d, int level, vector<int>& arr, ll& maxWidth) {
        if(!root)
            return;
        
        if(level == arr.size()) {
            arr.push_back(d);
        } else {
            maxWidth = max(maxWidth, d-arr[level]+1);
        }
        
        DFS(root->left, 2*d+1, level+1, arr, maxWidth);
        DFS(root->right, 2*d+2, level+1, arr, maxWidth);
    }
    
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)   
            return 0;
        
        ll maxWidth = 1;
        vector<int> arr;
        DFS(root, 0, 0, arr, maxWidth);
        return maxWidth;
    }
};