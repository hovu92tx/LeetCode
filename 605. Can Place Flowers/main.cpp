#include <vector>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int counter = 0;
        // add 2 zero spots at the begin and the end of the array to calculate easier.
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        // scan the array and find the possible spot
        for (int x = 1; x < flowerbed.size() - 1; x++)
        {
            if (flowerbed[x] == 0 && flowerbed[x + 1] == 0 && flowerbed[x - 1] == 0)
            {
                flowerbed[x] = 1;
                counter += 1;
            }
        }
        return counter >= n;
    }
};