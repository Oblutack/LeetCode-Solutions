#include <string>

int strStr(std::string haystack, std::string needle) {
    for(int i=0;i<haystack.length();i++){
        if(haystack.at(i)==needle.at(0)){
            std::string sub = haystack.substr(i, needle.length());
            if(sub==needle)
                return i;
        }
    }

    return -1;
}

int main(){

}