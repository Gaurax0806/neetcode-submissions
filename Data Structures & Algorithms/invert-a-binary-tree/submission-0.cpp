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
    void swapp(TreeNode* node){
        if(node == NULL) return;
        TreeNode* temp = node;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
        if(node->right != NULL) swapp(node->right);
        if(node->left != NULL) swapp(node->left);
    }
    TreeNode* invertTree(TreeNode* root) {
       if(root == NULL) return root;
       TreeNode* node = root;
       swapp(root);
       return root;
    }
};
