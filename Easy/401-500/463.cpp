#include <vector>
using std::vector;

class Solution
{
private:
    int perimeter{0};

public:
    void dfs(vector<vector<int>> &grid, int i, int j)
    {
        // 找到边界或进入水域说明存在一条边
        if (i < 0 || i >= grid.size() || j <= 0 || j >= grid[0].size() || grid[i][j] == 0)
        {
            perimeter++;
            return;
        }

        // 已访问检查
        if (grid[i][j] == -1)
        {
            return;
        }

        // 已访问标记
        grid[i][j] = -1;

        // 搜索四个方向
        dfs(grid, i - 1, j);
        dfs(grid, i + 1, j);
        dfs(grid, i, j - 1);
        dfs(grid, i, j + 1);
    }

    int islandPerimeter(vector<vector<int>> &grid)
    {
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    dfs(grid, i, j);
                    return perimeter;
                }
            }
        }
        return perimeter;
    }

    int islandPerimeter_2(vector<vector<int>> &grid)
    {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    if (i - 1 < 0 || grid[i - 1][j] == 0)
                        ans++;
                    if (i + 1 >= n || grid[i + 1][j] == 0)
                        ans++;
                    if (j - 1 < 0 || grid[i][j - 1] == 0)
                        ans++;
                    if (j + 1 >= m || grid[i][j + 1] == 0)
                        ans++;
                }
            }
        }
        return ans;
    }
};
