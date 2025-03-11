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
        vector<vector<int>> ans;
        if(!root) return ans;
        bool flag = true; // left->right
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> v(n);

            for(int i=0;i<n;i++){
            TreeNode* front = q.front();
            q.pop();
            int x = flag ? i : n-i-1;
            v[x] = front->val;

            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);

            }
            flag = !flag;
            ans.push_back(v);
        }
        return ans;
    }
};