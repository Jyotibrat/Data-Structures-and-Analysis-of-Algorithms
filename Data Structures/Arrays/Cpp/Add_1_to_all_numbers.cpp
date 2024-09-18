// Write a program to add 1 to all the numbers of a 2D array.

#include <iostream>
using namespace std;

int main(){
    int Array[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            Array[i][j] = 0;
            Array[i][j] += 1;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}