#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashMap;

    for(int i=0;i<nums.size();i++){
        int currentNum = nums.at(i);
        int complement = target - currentNum;

        if(hashMap.find(complement) != hashMap.end()){
            return {hashMap[complement], i};
        }

        hashMap[currentNum] = i;
    }

    return {};

}

int main(){
    std::vector<int> nums{2,7,11,15};
    int target = 9;

    std::vector<int> output = twoSum(nums,target);
    for(int i : output)
        std::cout<<i<<" ";
}


