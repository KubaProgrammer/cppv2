#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    // initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    // generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    int x;
    std::cout<<randomNumber<<std::endl;
    std::cout<<"Guess a number. Good luck."<<std::endl;
    do{
        std::cout<<"Enter number: ";
        std::cin>>x;
        if (x<randomNumber){
            std::cout<<"Your guess is too low. Try again."<<std::endl;
        }else if (x>randomNumber){
            std::cout<<"Your guess is too high. Try again."<<std::endl;
        }else if(x==randomNumber){
            std::cout<<"Congratulations!!!"<<std::endl;
        }
    }while (x!=randomNumber);
}