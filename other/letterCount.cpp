#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string sentence;
    char letter;
    int sum = 0;
    std::cout<<"Enter a sentence:"<<std::endl;
    std::getline(std::cin, sentence);
    std::cout<<"Which letter do you want to count?"<<std::endl;
    std::cin>>letter;
    for (char x : sentence){
        if (std::tolower(x) == std::tolower(letter)){
            sum++;
        }
    }
    std::cout<<"Your letter occurs "<<sum<<" times in the given sentence."<<std::endl;
}