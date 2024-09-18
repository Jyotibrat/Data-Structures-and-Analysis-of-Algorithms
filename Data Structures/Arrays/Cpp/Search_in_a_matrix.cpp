// Write a program to read an array and search for an number if it is present in the matrix or not.

#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the number of rows for Matrix :" << " ";
    cin >> row;
    cout << "Enter the number of columns for Matrix :" << " ";
    cin >> col;
    int Matrix[row][col];
    cout << "Enter the elements of Matrix : " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> Matrix[i][j];
        }
    }
    int search;
    cout << "Enter the number you want to search in the Matrix:" << " ";
    cin >> search;
    bool flag = false;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if (Matrix[i][j] == search){
                flag = true;
                break;
            }
        }
        if (flag == true){
            break;
        }
    }
    if (flag == true){
        cout << "Number found in the matrix." << endl;
    }
    else{
        cout << "Number not found in the matrix." << endl;
    }
    return 0;
}