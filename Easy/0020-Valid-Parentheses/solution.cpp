#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

bool isValid(std::string s) {
    std::stack<char> bracketStack;

    std::unordered_map<char, char> brackets = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
    };


    for(char c : s){
        if (brackets.count(c) > 0){
            bracketStack.push(c);
        }

        else{
            if(bracketStack.empty()){
                return false;
            }

            char openBracket = bracketStack.top();
            bracketStack.pop();

            if (brackets.at(openBracket) != c) {
                return false;
            }

        }
    }
    return bracketStack.empty();
}

int main() {

}