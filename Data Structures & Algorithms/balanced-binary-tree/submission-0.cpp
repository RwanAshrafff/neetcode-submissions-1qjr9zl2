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
    bool isBalanced(TreeNode* root) {
        return checkheight(root)!=-1;
    }
private:
    int checkheight(TreeNode* root){
        if(root==nullptr) return 1;

        int lftheight=checkheight(root->left);
        if(lftheight==-1)return -1;

        int rtheight=checkheight(root->right);
        if(rtheight==-1)return -1;

        if (abs(lftheight-rtheight)>1) return -1;

        return max(lftheight,rtheight)+1;
    }
};
