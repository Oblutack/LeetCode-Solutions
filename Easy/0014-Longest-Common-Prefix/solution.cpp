#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {

    int shortestStringLength = strs.at(0).length();
    for (int i = 1; i < strs.size(); i++) {
        shortestStringLength = std::min(shortestStringLength, (int)strs[i].length());
    }

    std::string result = "";

    for (int i = 0; i < shortestStringLength; i++) {

        char currentChar = strs.at(0).at(i);

        for (int j = 1; j < strs.size(); j++) {

            if (strs.at(j).at(i) != currentChar) {
                return result;
            }
        }

        result.push_back(currentChar);
    }

    return result;
}


int main(){
    std::vector<std::string> strs = {"flower","flow","flight"};

    std::string result = longestCommonPrefix(strs);

    std::cout<<result;

}