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
    bool isLeaf(TreeNode *node)
    {
        return node->left == nullptr && node->right == nullptr;
    }

    int dfs(TreeNode *node)
    {
        int result = 0;
        if (node->left)
        {
            result += isLeaf(node->left) ? node->left->val : dfs(node->left);
        }
        if (node->right && !isLeaf(node->right))
        {
            result += dfs(node->right);
        }
        return result;
    }

    int sumOfLeftLeaves(TreeNode *root)
    {
        return root ? dfs(root) : 0;
    }
};
