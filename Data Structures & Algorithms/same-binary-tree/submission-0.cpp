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
    bool is_same(TreeNode* node1, TreeNode* node2){
        if(node2 == NULL && node1 == NULL) return 1;
        if(node1 == NULL || node2 == NULL) return false;
        if(node1->val != node2->val) return 0;
        bool s1 = is_same(node1->left, node2->left);
        bool s2 = is_same(node1->right, node2->right);
        return (s1 && s2);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return is_same(p, q);
    }
};
