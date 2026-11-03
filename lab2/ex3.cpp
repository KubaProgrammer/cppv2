#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& word){
    for (size_t i=0; i<word.length()/2; i++){
        if (word[i] != word[word.length()-1-i]){
            return false;
        }
    }
    return true;
}

bool isPalindromeFunction(const std::string& word){
    std::string reversed = word;
    std::reverse(reversed.begin(), reversed.end());
    return reversed == word;
}

void printSolution(bool x){
    if (x == 1){
        std::cout<<"This is a palindrome."<<std::endl;
    }else{
        std::cout<<"This is not a palindrome"<<std::endl;
    }
   // std::cout << "This is " << (x == 1 ? "" : "not ") << "a palindrome" << std::endl;
}

int main(){
    std::string word;
    std::cout<<"Insert the word to check: ";
    std::getline(std::cin, word);
    std::cout<<"Handmade solution: "<<std::endl;
    printSolution(isPalindrome(word));
    std::cout<<"With reverse function:"<<std::endl;
    printSolution(isPalindromeFunction(word));
}