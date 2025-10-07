#include <cmath>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        TreeNode *left{root}, *right{root};
        int leftHeight{}, rightHeight{};
        while (left != nullptr)
        {
            left = left->left;
            leftHeight++;
        }
        while (right != nullptr)
        {
            right = right->right;
            rightHeight++;
        }
        if (leftHeight == rightHeight)
        {
            return pow(2, leftHeight) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
