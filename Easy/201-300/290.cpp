#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
        {
            return false;
        }

        auto lToWMap = unordered_map<char, string>{};
        auto wToLMap = unordered_map<string, char>{};
        int size = pattern.size();
        for (int i = 0; i < size; i++)
        {
            if (lToWMap.contains(pattern[i]) && lToWMap[pattern[i]] != words[i])
            {
                return false;
            }
            if (wToLMap.contains(words[i]) && wToLMap[words[i]] != pattern[i])
            {
                return false;
            }
            wToLMap[words[i]] = pattern[i];
            lToWMap[pattern[i]] = words[i];
        }
        return true;
    }
};

int main()
{
    Solution s;
    s.wordPattern("aaaa", "aa aa aa aa");
    return 0;
}
