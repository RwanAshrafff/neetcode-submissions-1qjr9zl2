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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        calc(root,ans);
        return ans;
    }
private:
    int calc(TreeNode* node, int &ans){
        if (node==nullptr) return 0;

        int lftheight=calc(node->left,ans);
        int rtheight=calc(node->right,ans);

        ans=max(ans,lftheight+rtheight);
        return 1+max(lftheight,rtheight);
    }
};