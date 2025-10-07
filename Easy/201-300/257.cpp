#include <format>
#include <string>
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
    // 传入根节点，记录路径 path，结果存放进入 result
    void traversal(TreeNode *root, vector<int> &path, vector<string> &result)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            string sPath{};
            for (int i = 0; i < path.size() - 1; i++)
            {
                sPath += format("{}->", path[i]);
            }
            sPath += to_string(path[path.size() - 1]);
            result.push_back(sPath);
            return;
        }
        if (root->left)
        {
            traversal(root->left, path, result);
            path.pop_back();
        }
        if (root->right)
        {
            traversal(root->right, path, result);
            path.pop_back();
        }
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        auto result = vector<string>{};
        auto path = vector<int>{};
        if (root == nullptr)
        {
            return result;
        }
        traversal(root, path, result);
        return result;
    }
};
