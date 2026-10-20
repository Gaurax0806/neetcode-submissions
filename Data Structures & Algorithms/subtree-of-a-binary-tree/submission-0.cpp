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
    bool check_same(TreeNode* node1, TreeNode* node2){
        if(node2 == NULL && node1 == NULL) return 1;
        if(node1 == NULL || node2 == NULL) return false;
        if(node1->val != node2->val) return 0;
        bool s1 = check_same(node1->left, node2->left);
        bool s2 = check_same(node1->right, node2->right);
        return (s1 && s2);
    }

    bool is_equal(TreeNode* node, TreeNode* subnode){
        if(node == NULL) return 0;
        if(node->val == subnode->val){
            if (check_same(node, subnode))
                return true;
        }
        bool a1 = is_equal(node->left, subnode);
        bool a2 = is_equal(node->right, subnode);
        return (a1 || a2);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return is_equal(root, subRoot);

    }
};
