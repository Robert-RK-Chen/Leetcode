#include <algorithm>
#include <bitset>
#include <cstdint>
#include <string>
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {

        n = (n >> 1) & 0x55555555 | (n & 0x55555555) << 1;
        // 交换相邻的2位组
        n = (n >> 2) & 0x33333333 | (n & 0x33333333) << 2;
        // 交换相邻的4位组
        n = (n >> 4) & 0x0f0f0f0f | (n & 0x0f0f0f0f) << 4;
        // 交换相邻的8位组
        n = (n >> 8) & 0x00ff00ff | (n & 0x00ff00ff) << 8;
        // 交换相邻的16位组
        n = (n >> 16) | (n << 16);
        return n;
    }

    uint32_t reverseBits_2(uint32_t n)
    {
        string n_bin = bitset<32>(n).to_string();
        reverse(n_bin.begin(), n_bin.end());
        return static_cast<uint32_t>(bitset<32>(n_bin).to_ulong());
    }
};
