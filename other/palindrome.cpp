#include <iostream>
#include <string>

bool isPalindrome(const std::string& word){
    for (size_t i=0; i<word.length()/2; i++){
        if (word[i] != word[word.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    std::string word = "abcyubvsbvsa";
    std::cout<<isPalindrome(word);
}