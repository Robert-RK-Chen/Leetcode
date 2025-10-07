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
    vector<int> preorderTraversal(TreeNode *root)
    {
        auto result = vector<int>{};
        auto treeStack = stack<TreeNode *>{};
        if (root != nullptr)
        {
            treeStack.push(root);
        }
        while (!treeStack.empty())
        {
            TreeNode *currentNode = treeStack.top();
            treeStack.pop();
            result.push_back(currentNode->val);
            if (currentNode->right)
            {
                treeStack.push(currentNode->right);
            }
            if (currentNode->left)
            {
                treeStack.push(currentNode->left);
            }
        }
        return result;
    }
};
