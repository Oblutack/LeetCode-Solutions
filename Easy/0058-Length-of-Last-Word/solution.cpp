#include <string>
#include <iostream>

int lengthOfLastWord(std::string s) {

    int length = 0;
    int i = s.length()-1;

    while( i >= 0 && s.at(i) == ' ')
        i--;


    while(i>=0 && s.at(i) != ' '){
        length++;
        i--;
    }

    return length;

}

int main(){
    std::string s = "   fly me   to   the moon  ";

    std::cout<< lengthOfLastWord(s);
}

