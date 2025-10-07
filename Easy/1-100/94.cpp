#include <queue>
#include <stack>
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> treeStack;

        while (root != nullptr || !treeStack.empty())
        {
            while (root != nullptr)
            {
                treeStack.push(root);
                root = root->left;
            }
            root = treeStack.top();
            treeStack.pop();
            result.push_back(root->val);
            root = root->right;
        }
        return result;
    }
};
