#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() <= 1)
        {
            return intervals;
        }

        sort(intervals.begin(), intervals.end());
        auto result = vector<vector<int>>{};

        int start{intervals[0][0]}, end{intervals[0][1]};
        auto current = intervals[0];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= current[1])
            {
                current[1] = max(current[1], intervals[i][1]);
            }
            else
            {
                result.push_back(move(current));
                current = intervals[i];
            }
        }
        result.push_back(move(current));
        return result;
    }
};
