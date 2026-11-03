#include <iostream>

double convert(double &f){
    return (f-32)*5/9;
}

int main(){
    double f;
    std::cout<<"Insert the temperature in Fahrenheit."<<std::endl;
    std::cin>>f;
    std::cout<<"The temperature in Celcius is: "<<convert(f)<<std::endl;
}