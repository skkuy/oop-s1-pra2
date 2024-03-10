#include <iostream>
int sum_diagonal(int array[4][4]);
int main (){
    int matrix[4][4];
    for (int row = 0 ; row < 4 ; row++){
        for (int col = 0 ; col < 4 ; col++){
            if (row == col){
                matrix[row][col] = 1;        
            }
            else {
                matrix[row][col] = 0;
            }
        }
    }
    int sum = sum_diagonal(matrix) ;
    

    return 0;
} 