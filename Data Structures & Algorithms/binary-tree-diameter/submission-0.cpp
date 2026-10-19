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
    int diameter(TreeNode* node, int &max_dia){
        if(node == NULL) return 0;
        int lh = diameter(node->left, max_dia);
        int rh = diameter(node->right, max_dia);
        int max_d = lh+rh;
        max_dia = max(max_dia, max_d);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        TreeNode* node = root;
        int max_dia = 0;
        diameter(node, max_dia);
        return max_dia;
    }
};