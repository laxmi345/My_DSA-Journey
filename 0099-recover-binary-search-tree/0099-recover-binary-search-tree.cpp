class Solution {
public:
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev = NULL;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        // Detect violation
        if (prev && prev->val > root->val) {

            // First violation
            if (!first) {
                first = prev;
            }

            // Update second every time
            second = root;
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);

        // Swap values
        swap(first->val, second->val);
    }
};