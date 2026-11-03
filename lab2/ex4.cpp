#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string sentence;
    char letter;
    int sum = 0;
    std::cout<<"Insert the sentence:"<<std::endl;
    std::getline(std::cin, sentence);
    std::cout<<"Insert the letter you want co count: ";
    std::cin>>letter;
    for (char x : sentence){
        if (std::tolower(x) == std::tolower(letter)){
            sum++;
        }
    }
    std::cout<<"The letter given occurs "<<sum<<" times in the sentence."<<std::endl;
}