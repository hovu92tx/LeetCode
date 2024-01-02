#include <vector>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result;
        bool bool_max;
        // find max value
        int max_value = 0;
        for (int x : candies)
        {
            if (x >= max_value)
            {
                max_value = x;
            }
        }

        // determine whether kids have the greatest number of canides or not
        for (int candy : candies)
        {
            if (candy + extraCandies >= max_value)
            {
                bool_max = true;
            }
            else
            {
                bool_max = false;
            }
            result.push_back(bool_max);
        }
        return result;
    }
};