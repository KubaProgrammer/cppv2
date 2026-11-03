#include <iostream>
#include <vector>
#include <ctime>

int sum(const std::vector<std::vector<int>>& vector){
    int sum = 0;
    for (size_t i=0; i<vector.size(); i++){
        for (size_t j=0; j<vector[i].size(); j++){
            if (i%2!=0 || j%2==0){
                sum += vector[i][j];
            }
        }
    }
    return sum;
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int rows, columns;
    std::cout<<"Insert number of rows:"<<std::endl;
    std::cin>>rows;
    while(rows<=0){
        std::cout<<"The number of rows has to be greater than 0. Try again."<<std::endl;
        std::cin>>rows;
    }
    std::cout<<"Insert number of columns:"<<std::endl;
    std::cin>>columns;
    while(columns<=0){
        std::cout<<"The number of columns has to be greater than 0. Try again."<<std::endl;
        std::cin>>columns;
    }
    std::vector<std::vector<int>> matrix(
        rows, std::vector<int>(columns, 0)
    );

    for (size_t i=0; i<matrix.size(); i++){
        for (size_t j=0; j<matrix[i].size(); j++){
            int randomNumber = rand() % 9 + 1;
            matrix[i][j] = randomNumber;
        }
    }

    for (size_t i=0; i<matrix.size(); i++){
        for (size_t j=0; j<matrix[i].size(); j++){
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::cout<<sum(matrix);
}