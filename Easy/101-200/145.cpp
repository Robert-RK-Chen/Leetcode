#include <stack>
#include <vector>
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
    vector<int> postorderTraversal(TreeNode *root)
    {
        auto result = vector<int>{};
        auto treeStack = stack<TreeNode *>{};

        if (root == nullptr)
        {
            return result;
        }
        TreeNode *prev = nullptr;
        while (root != nullptr || !treeStack.empty())
        {
            while (root != nullptr)
            {
                treeStack.emplace(root);
                root = root->left;
            }
            root = treeStack.top();
            treeStack.pop();
            if (root->right == nullptr || root->right == prev)
            {
                result.emplace_back(root->val);
                prev = root;
                root = nullptr;
            }
            else
            {
                treeStack.emplace(root);
                root = root->right;
            }
        }
        return result;
    }
};
