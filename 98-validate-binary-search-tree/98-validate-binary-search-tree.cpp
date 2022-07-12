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
    int func(TreeNode* root,long int l,long int h){
        if(!root){
            return 0;
        }
        if(l>=root->val || root->val>=h){return -1;}
        int v1=func(root->left,l,root->val);
        if(v1==-1){return -1;}
        int v2=func(root->right,root->val,h);
        if(v2==-1){return -1;}
        return 0;
    }
    bool isValidBST(TreeNode* root) {
        long int l=LONG_MIN,h=LONG_MAX;
        if(func(root,l,h)==-1){
            return false;
        }
        return true;
    }
};