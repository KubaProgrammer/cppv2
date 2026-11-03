#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string word, reversed = "";
    std::getline(std::cin, word);

    for (size_t i=0; i<word.size(); i++){
        reversed += word[word.size()-1-i];
    }

    std::reverse(word.begin(), word.end());
    std::cout<<word<<std::endl;
    std::cout<<reversed;
}