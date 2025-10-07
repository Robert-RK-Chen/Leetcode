#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        auto stotmap = unordered_map<char, char>{};
        auto ttosmap = unordered_map<char, char>{};
        for (int i = 0; i < s.size(); i++)
        {
            auto stot = stotmap.find(s[i]);
            auto ttos = ttosmap.find(t[i]);
            if (stot == stotmap.end())
            {
                stotmap.insert({s[i], t[i]});
            }
            if (ttos == ttosmap.end())
            {
                ttosmap.insert({t[i], s[i]});
            }
            if (stotmap[s[i]] != t[i] || ttosmap[t[i]] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    return s.isIsomorphic("badc", "baba");
}
