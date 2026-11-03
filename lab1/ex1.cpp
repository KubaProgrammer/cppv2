#include<iostream>

void writeNumbers(int &x){
    for (int i=0; i<=x;i++){
        std::cout<<"i = "<<i<<std::endl;
    }
}

void sumNumbers(int &x){
    int a=0;
    for (int i=0; i<=x; i++){
        a+=x;
    }
    std::cout<<"The sum of numbers above is: "<<a<<std::endl;
}

int main(){
    int x;
    std::cout<<"Give me a number greater than 0."<<std::endl;
    std::cin>>x;
    if (x<0){
        std::cout<<"The given number is lower than 0."<<std::endl;
        return 0;
    }
    writeNumbers(x);
    sumNumbers(x);

}