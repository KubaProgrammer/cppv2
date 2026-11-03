#include <iostream>
#include<string>
#include <algorithm>

int main(){
    std::string sentence, reversed;
    std::cout<<"Insert the sentence you want to reverse:"<<std::endl;
    std::getline(std::cin, sentence);
    for (size_t i=0; i<sentence.size(); i++){
        reversed += sentence[sentence.size()-1-i];
    }
    std::cout<<"Handmade reverse: "<<reversed<<std::endl;
    reverse(sentence.begin(), sentence.end());
    std::cout<<"Reversed with function: "<<sentence<<std::endl;

}