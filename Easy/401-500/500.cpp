#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::unordered_map;
using std::vector;

class Solution
{
private:
    unordered_map<char, int> keys{
        {'q', 1},
        {'w', 1},
        {'e', 1},
        {'r', 1},
        {'t', 1},
        {'y', 1},
        {'u', 1},
        {'i', 1},
        {'o', 1},
        {'p', 1},
        {'a', 2},
        {'s', 2},
        {'d', 2},
        {'f', 2},
        {'g', 2},
        {'h', 2},
        {'j', 2},
        {'k', 2},
        {'l', 2},
        {'z', 3},
        {'x', 3},
        {'c', 3},
        {'v', 3},
        {'b', 3},
        {'n', 3},
        {'m', 3},
    };

public:
    vector<string> findWords(vector<string> &words)
    {
        auto result = vector<string>{};

        for (const string &word : words)
        {
            bool isSameLine = true;

            for (int i = 1; i < word.size(); i++)
            {
                if (keys[::tolower(word[i])] != keys[::tolower(word[0])])
                {
                    isSameLine = false;
                    break;
                }
            }

            if (isSameLine)
            {
                result.push_back(word);
            }
        }

        return result;
    }
};
