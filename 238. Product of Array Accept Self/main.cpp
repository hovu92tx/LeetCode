#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>product;
        int leftProduct = 1;
        for(int x=0;x<nums.size(); x++){
            product.push_back(leftProduct);
            leftProduct *= nums[x];
        }
        int rightProduct=1;
        for(int x =nums.size()-1; x>=0;x--){
            product[x] *= rightProduct;
            rightProduct *= nums[x];
        }
        return product;
    }
};