#include <stack>
#include <unordered_map>
#include <vector>

using std::stack;
using std::unordered_map;
using std::vector;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        auto hashMap = unordered_map<int, int>{};
        auto st = stack<int>{};
        auto res = vector<int>(nums1.size());

        for (int i = nums2.size() - 1; i >= 0; --i)
        {
            int num = nums2[i];
            while (!st.empty() && num >= st.top())
            {
                st.pop();
            }
            hashMap[num] = st.empty() ? -1 : st.top();
            st.push(num);
        }
        for (int i = 0; i < nums1.size(); ++i)
        {
            res[i] = hashMap[nums1[i]];
        }
        return res;
    }
};
