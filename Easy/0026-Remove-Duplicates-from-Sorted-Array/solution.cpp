#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {

    int k = 1;

    for(int i=0;i<nums.size();i++){
        if(nums.at(k-1)!=nums.at(i)){
            nums.at(k) = nums.at(i);
            k++;
        }
    }
    return k;
}

int main (){
    std::vector<int> nums = {1,1,2};
    int k;
    k = removeDuplicates(nums);
    std::cout<<k;
}