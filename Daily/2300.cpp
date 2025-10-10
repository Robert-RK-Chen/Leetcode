#include <algorithm>
#include <vector>

using std::vector;

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        auto result = vector<int>{};
        std::ranges::sort(potions);
        for (int i = 0; i < spells.size(); i++)
        {
            if (spells[i] == 0)
            {
                result.push_back(0);
                continue;
            }
            else
            {
                int left = 0, right = potions.size();
                while (left < right)
                {
                    int middle = left + (right - left) / 2;
                    long long value = (long long)spells[i] * potions[middle];
                    if (value >= success)
                    {
                        right = middle;
                    }
                    else
                    {
                        left = middle + 1;
                    }
                }
                result.push_back(potions.size() - right);
            }
        }
        return result;
    }
};
