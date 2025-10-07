#include <cmath>
#include <vector>

using std::min;
using std::vector;

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int result{duration};
        for (int i = 0; i < timeSeries.size() - 1; i++)
        {
            result += min(timeSeries[i + 1] - timeSeries[i], duration);
        }
        return result;
    }
};
