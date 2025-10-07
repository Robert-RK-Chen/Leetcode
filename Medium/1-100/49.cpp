#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        auto result = vector<vector<string>>{};
        auto strSet = unordered_map<string, int>{};
        int size = strs.size();
        for (int i = 0, j = 0; i < size; i++)
        {
            string str = strs[i];
            sort(str.begin(), str.end());
            if (strSet.contains(str))
            {
                result[strSet[str]].push_back(move(strs[i]));
            }
            else
            {
                strSet.insert({str, j});
                result.push_back({move(strs[i])});
                j++;
            }
        }
        return result;
    }

    vector<vector<string>> groupAnagrams_2(vector<string> &strs)
    {
        unordered_map<string, vector<string>> groups;

        for (const auto &str : strs)
        {
            string key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> result;
        result.reserve(groups.size());
        for (auto &[key, group] : groups)
        {
            result.push_back(move(group));
        }
        return result;
    }
};
