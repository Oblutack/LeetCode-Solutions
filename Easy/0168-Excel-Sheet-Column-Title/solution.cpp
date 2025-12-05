#include <string>
#include <algorithm>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {

        std::string result = "";

        while (columnNumber > 0){

            columnNumber--;

            char digit = 'A' + (columnNumber%26);

            result += digit;

            columnNumber /= 26;
        }

        std::reverse(result.begin(), result.end());

        return result;

    }
};