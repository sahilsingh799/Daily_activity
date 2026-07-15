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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
         // q.push(root);
        while(!q.empty()){
            vector<int>currlevel;
            int n=q.size();
            for(int i=0;i<n;i++){
            TreeNode* f=q.front();
            q.pop();
            if(f->left!=NULL)q.push(f->left);
            if(f->right!=NULL)q.push(f->right);
            
            currlevel.push_back(f->val);
            }
            //reverse(ans.begin(),ans.end());
            ans.push_back(currlevel);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};