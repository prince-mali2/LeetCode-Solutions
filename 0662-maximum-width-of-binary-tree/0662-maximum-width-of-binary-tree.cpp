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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        int ans=0;
        

        while(!q.empty()){
            int n = q.size();
            int mini = q.front().second;
            int first=0;
            int last=0;

            for(int i=0;i<n;i++){
                TreeNode* front = q.front().first;
                long long idx = q.front().second-mini;
                q.pop();

                if(i==0) first = idx;
                if(i==n-1) last = idx;

                if(front->left) q.push({front->left, 2*idx+1});
                if(front->right) q.push({front->right, 2*idx+2});

            }
            ans = max(ans,last-first+1);
        }
        return ans;
    }
};