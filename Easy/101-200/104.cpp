#include <algorithm>
#include <queue>
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
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }

    int maxDepth_dfs(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        auto treeQueue = queue<TreeNode *>{};
        treeQueue.push(root);
        int result = 0;

        while (!treeQueue.empty())
        {
            int size = treeQueue.size();
            while (size > 0)
            {
                TreeNode *currentNode = treeQueue.front();
                treeQueue.pop();
                if (currentNode->left)
                {
                    treeQueue.push(currentNode->left);
                }
                if (currentNode->right)
                {
                    treeQueue.push(currentNode->right);
                }
                size--;
            }
            result++;
        }
        return result;
    }
};
