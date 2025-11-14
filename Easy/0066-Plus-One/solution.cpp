#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    for(int i=digits.size()-1;i>=0;i--){
        if(digits.at(i)<9){
            digits.at(i)++;
            return digits;
        }
        else if(digits.at(i)==9){
            digits.at(i)=0;
        }


    }
    digits.insert(digits.begin(), 1);

    return digits;
}