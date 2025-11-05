#include <iostream>

bool isPalindrome(int x) {
    int originalNumber=x;
    long long int reversedNumber = 0;
    int placeholder;

    while(x>0){
        placeholder = x%10;
        reversedNumber = reversedNumber*10+placeholder;
        x = x/10;
    }
    if(reversedNumber==originalNumber)
        return true;
    else
        return false;
}

int main(){
    int x = 121;
    std::cout<<isPalindrome(x);

    return 0;
}