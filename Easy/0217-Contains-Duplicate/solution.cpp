#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {

        std::sort(begin(nums), end(nums));

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }

        return false;
    }
};