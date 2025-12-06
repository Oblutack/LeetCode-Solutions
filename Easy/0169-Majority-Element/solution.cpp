#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {

        int candidate = 0;
        int mayor = 0;

        for(int i=0;i<nums.size();i++){

            if (mayor == 0){
                candidate = nums.at(i);
            }

            if(nums.at(i) == candidate){
                mayor++;
            }else{
                mayor--;
            }
        }

        return candidate;
    }
};