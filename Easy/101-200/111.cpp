#include <algorithm>
using namespace std;

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
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }
        int min_depth = INT_MAX;
        if (root->left)
        {
            min_depth = min(minDepth(root->left), min_depth);
        }
        if (root->right)
        {
            min_depth = min(minDepth(root->right), min_depth);
        }
        return min_depth + 1;
    }

    int minDepth_2(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }
        if (root->left && root->right)
        {
            return min(minDepth_2(root->left), minDepth_2(root->right)) + 1;
        }
        if (root->left)
        {
            return minDepth_2(root->left) + 1;
        }
        if (root->right)
        {
            return minDepth_2(root->right) + 1;
        }
    }

    int minDepth_3(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr)
        {
            return 1;
        }
        if (root->left == nullptr)
        {
            return minDepth_3(root->right) + 1;
        }
        if (root->right == nullptr)
        {
            return minDepth_3(root->left) + 1;
        }
        return min(minDepth_3(root->left), minDepth_3(root->right)) + 1;
    }
};
