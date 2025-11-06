#include <iostream>
#include <string>
#include <unordered_map>

int romanToInt(std::string s) {
    std::unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    int total = romanValues[s.back()];

    for (int i = s.length() - 2; i >= 0; i--) {

        if (romanValues[s[i]] < romanValues[s[i+1]]) {
            total -= romanValues[s[i]];
        } else {
            total += romanValues[s[i]];
        }
        return total;
    }
}

int main(){

}