#include <string>
#include <algorithm>

std::string addBinary(std::string a, std::string b) {
    std::string result = "";
    int carry = 0;

    int i = a.size()-1;
    int j = b.size()-1;

    while (i >= 0 || j >= 0 || carry == 1){

        int sum = carry;

        if(i>=0){
            sum += a.at(i) - '0';
            i--;
        }
        if(j>=0){
            sum += b.at(j) - '0';
            j--;
        }

        result += (sum % 2) + '0';

        carry = sum/2;
    }

    std::reverse(result.begin(), result.end());

    return result;
}