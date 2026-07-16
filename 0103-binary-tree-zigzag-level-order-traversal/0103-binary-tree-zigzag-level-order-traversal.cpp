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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()){
            int n=q.size();
            vector<int>currlevel(n);
            for(int i=0;i<n;i++){
                auto f=q.front();
                q.pop();
                int index = leftToRight ? i : (n - 1 - i);
                currlevel[index] = f->val;
                if (f->left != nullptr) {
             q.push(f->left);
        }
        if (f->right != nullptr) {
        q.push(f->right);
        }

            }
            ans.push_back(currlevel);
            leftToRight = !leftToRight;
        }
        return ans;
    }
};