/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode * Root,int & maximum){
        if(!Root){
            return 0;
        }
        else{
            int l=height(Root->left,maximum);
            int r=height(Root->right,maximum);
            maximum= max(maximum,l+r);
            return 1+(max(l,r));
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maximum=0;
        if(root->left==nullptr && root->right==nullptr){
            return 0;
        }
        height(root,maximum);
        return maximum;
    }
};
