// Write a program to read a 2D matrix and perform multiplication between them.

#include<iostream>
using namespace std;

int main(){
    int row_1, col_1, row_2, col_2;
    cout << "Enter the number of rows for matrix 1:" << " ";
    cin >> row_1;
    cout << "Enter the number of columns for matrix 1:" << " ";
    cin >> col_1;
    cout << "Enter the number of rows for matrix 2:" << " ";
    cin >> row_2;
    cout << "Enter the number of columns for matrix 2:" << " ";
    cin >> col_2;
    int Matrix_1[row_1][col_1], Matrix_2[row_2][col_2];
    cout << "Enter the elements of Matrix 1: " << endl;
    for(int i = 0; i < row_1; i++){
        for(int j = 0; j < col_1; j++){
            cin >> Matrix_1[i][j];
        }
    }
    cout << "Enter the elements of Matrix 2: " << endl;
    for(int i = 0; i < row_2; i++){
        for(int j = 0; j < col_2; j++){
            cin >> Matrix_2[i][j];
        }
    }
    int result[row_1][col_2];
    
    cout << "Resultant Matrix:" << " ";
    for(int i = 0; i < row_1; i++){
        for(int j = 0; j < col_2; j++){
            result[i][j] = {0};
            for(int k = 0; k < col_1; k++){
                result[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
            }
        }
    }
    for(int i = 0; i < row_1; i++){
        for(int j = 0; j < col_2; j++){
            cout << result[i][j] << " ";
        }
    }
    return 0;
}