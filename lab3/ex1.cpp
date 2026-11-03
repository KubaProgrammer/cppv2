#include <iostream>
#include <string>

class MyClass{
private:
    std::string name;
public:
    MyClass(std::string n) : name(n){
        std::cout<<"Constructor of "<<name<<" called"<<std::endl;
    }
    ~MyClass(){
        std::cout<<"Destructor of "<<name<<" called"<<std::endl;
    }
};

int main(){
    std::cout<<"Entering main() function"<<std::endl;
    MyClass class1("local");
    {
        MyClass obj2("block");
    }
    std::cout<<"Leaving main() function"<<std::endl;
}

MyClass globalObject("global");