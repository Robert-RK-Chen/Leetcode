#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // 当前天的最小值
        int currentMin{prices[0]};
        int result = INT_MIN;

        if (prices.size() == 1)
        {
            return 0;
        }
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < currentMin)
            {
                currentMin = prices[i];
            }
            else
            {
                int earning = prices[i] - currentMin;
                if (result < earning)
                {
                    result = earning;
                }
            }
        }
        return result >= 0 ? result : 0;
    }
};
