class Solution {
public:

    int maxh(TreeNode* root, int &diameter) {

        if (root == nullptr)
            return 0;

        int lh = maxh(root->left, diameter);
        int rh = maxh(root->right, diameter);

      
        diameter = max(diameter, lh + rh);

     
        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        int diameter = 0;

        maxh(root, diameter);

        return diameter;
    }
};