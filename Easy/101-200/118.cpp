#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        auto result = vector<vector<int>>(numRows);
        for (int i = 0; i < numRows; ++i)
        {
            result[i].resize(i + 1);
            result[i][0] = result[i][i] = 1;
            for (int j = 1; j < i; ++j)
            {
                result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
            }
        }
        return result;
    }
};
