class Solution {
public:
    TreeNode* delete_n(TreeNode* node, int key) {
        if (node == NULL) return NULL;

        if (key < node->val) {
            node->left = delete_n(node->left, key);
        }
        else if (key > node->val) {
            node->right = delete_n(node->right, key);
        }
        else {
            // Case 1: No left child
            if (node->left == NULL) {
                TreeNode* temp = node->right;
                delete node;
                return temp;
            }

            // Case 2: No right child
            if (node->right == NULL) {
                TreeNode* temp = node->left;
                delete node;
                return temp;
            }

            // Case 3: Two children
            TreeNode* successor = node->right;

            while (successor->left != NULL) {
                successor = successor->left;
            }

            node->val = successor->val;
            node->right = delete_n(node->right, successor->val);
        }

        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return delete_n(root, key);
    }
};