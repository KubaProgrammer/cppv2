#include <iostream>
#include <vector>

void removeNegatives(std::vector<int>& vector){
    for (auto it=vector.begin(); it!=vector.end();){
        if (*it < 0){
            it = vector.erase(it);
        }else{
            ++it;
        }
    }
}

void writeNumbers(const std::vector<int>& vector){
    for (auto it = vector.begin(); it != vector.end(); ++it){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::vector<int> numbers = {5, -2, 8, -7, 0, 12, -3};
    removeNegatives(numbers);
    writeNumbers(numbers);
}