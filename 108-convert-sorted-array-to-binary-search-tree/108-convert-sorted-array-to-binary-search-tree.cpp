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
    TreeNode *func(vector<int> &nums,int l,int h){
        if(h<l){return NULL;}
        int mid=(l+h)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=func(nums,l,mid-1);
        root->right=func(nums,mid+1,h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root=func(nums,0,nums.size()-1);
        return root;
    }
};