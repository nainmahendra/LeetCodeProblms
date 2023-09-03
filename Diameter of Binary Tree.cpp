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
int height(int &deapth,TreeNode* root){
    if(root==NULL)return 0;
    int left=height(deapth,root->left);
    int right=height(deapth,root->right);
    deapth=max(deapth,left+right);
    return 1+max(left,right);
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int deapth=0;
        int res=height(deapth,root);
        return deapth;
        
        
        
    }
};
