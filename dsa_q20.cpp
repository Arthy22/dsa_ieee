/**

* Definition for a binary tree node.

* struct TreeNode {

int val;

TreeNode *left;

TreeNode *right;

TreeNode(): val(0), left (nullptr), right (nullptr) {}

TreeNode(int x): val(x), left (nullptr), right (nullptr) {}

TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left (left), /**

* Definition for a binary tree node.

* struct TreeNode {

int val;

TreeNode *left;

TreeNode *right;

TreeNode(): val(0), left (nullptr), right (nullptr) {}

TreeNode(int x): val(x), left (nullptr), right (nullptr) {}

TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left (left), right(right) {}

*/

class Solution {

public:

int ans=0;

void maxf(TreeNode * root, int m){

if(!root){

return;

}

if(root->val>=m){

ans++;

}

m=max(root->val,m);

maxf(root->left,m); maxf(root->right,m);

}

int goodNodes (TreeNode* root) {

->right==nullptr){

if(root->left==nullptr && root

return 1;

}

maxf(root, INT_MIN);

return ans;

}

};

class Solution {

public:

int ans=0;

void maxf(TreeNode * root, int m){

if(!root){

return;

}

if(root->val>=m){

ans++;

}

m=max(root->val,m);

maxf(root->left,m); maxf(root->right,m);

}

int goodNodes (TreeNode* root) {

->right==nullptr){

if(root->left==nullptr && root

return 1;

}

maxf(root, INT_MIN);

return ans;

}

};
