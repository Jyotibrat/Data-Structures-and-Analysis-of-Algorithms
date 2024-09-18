// Write a Program to Read an array.

#include<iostream>
using namespace std;

int main(){
    int Array[5];
    for(int i = 0; i < 5; i++){
        cin >> Array[i];
    }
    for(int i = 0; i < 5; i++){
        cout << Array[i] << " ";
    }
    return 0;
}