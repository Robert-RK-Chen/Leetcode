#include <vector>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }

    vector<int> countBits(int n)
    {
        auto result = vector<int>(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if ((i & i - 1) == 0)
            {
                result[i] = 1;
            }
            else if (i % 2 == 0)
            {
                result[i] = hammingWeight(i);
            }
            else
            {
                result[i] = result[i - 1] + 1;
            }
        }
        return result;
    }
};
