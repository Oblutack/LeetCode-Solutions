#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {

    int k = 0;

    for(int i=0;i<nums.size();i++){
        if(nums.at(i)!=val){
            nums.at(k)=nums.at(i);
            k++;

        }
    }

    return k;
}

int main(){

    return 0;
}