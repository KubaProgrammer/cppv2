#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum = 0;
    for (int i=0; i<matrix.size(); i++){
        for (int j=0; j<matrix[i].size(); j++){
            sum += matrix[i][j];
        }
    }
    std::cout<<"Matrix sum is: "<<sum<<std::endl;
}