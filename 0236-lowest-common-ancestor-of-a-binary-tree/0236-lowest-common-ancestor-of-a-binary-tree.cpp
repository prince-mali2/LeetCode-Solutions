/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val==p->val || root->val==q->val) return root;

        TreeNode* ls = lowestCommonAncestor(root->left,p,q);
        TreeNode* rs = lowestCommonAncestor(root->right,p,q);

        if(ls!=NULL && rs!=NULL) return root;
        else if(ls!=NULL && rs==NULL) return ls;
        else if(rs!=NULL && ls==NULL) return rs;
        
    return NULL;
    }
};