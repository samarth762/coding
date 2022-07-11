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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v;
        if(!root){return v;}
        map<int,map<int,multiset<int>>> m;  // <vertical,<level,node>>
        queue<pair<TreeNode*,int>> q;             // <node,level>
        q.push({root,0});
        int level=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();
                TreeNode *temp=it.first;
                int data=it.second;
                m[data][level].insert(temp->val);
                if(temp->left){
                    q.push({temp->left,data-1});
                }
                if(temp->right){
                    q.push({temp->right,data+1});
                }
            }
            level+=1;
        }
        for(auto i:m){
            vector<int> vec;
            for(auto j:i.second){
                for(auto k:j.second){
                    vec.push_back(k);
                }
            }
            v.push_back(vec);
        }
        return v;
    }
};