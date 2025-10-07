#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        auto result_set = unordered_set<int>{};
        int i{0}, j{0};
        while (i < nums1.size() && j < nums2.size())
        {
            while (i < nums1.size() && j < nums2.size() && nums1[i] < nums2[j])
            {
                i++;
            }
            while (i < nums1.size() && j < nums2.size() && nums2[j] < nums1[i])
            {
                j++;
            }
            if (i < nums1.size() && j < nums2.size() && nums1[i] == nums2[j])
            {
                result_set.insert(nums1[i]);
                i++;
                j++;
            }
        }
        return vector<int>{result_set.begin(), result_set.end()};
    }
};
