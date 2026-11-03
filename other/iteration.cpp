#include <iostream>
#include <vector>

void writeNumbers(const std::vector<int>& vector){
    for (auto it = vector.begin(); it != vector.end(); ++it){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::vector<int> numbers = {3, 8, 12, 5, 20, 7, 16, 9};
    int sum = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it){
        if (*it%2 == 0){
            *it/=2;
        }else{
            *it*=3;
        }
        sum += *it;
    }
    std::cout<<"The modified vector: ";
    writeNumbers(numbers);
    std::cout<<"The sum of those numbers is: "<<sum<<std::endl;
}