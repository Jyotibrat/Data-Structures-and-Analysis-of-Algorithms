// Write a program to read an array and calculate the average of the elements in the array.

#include<iostream>
using namespace std;

int main(){
    int Array[5];
    for(int i = 0; i < 5; i++){
        cin >> Array[i];
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += Array[i];
    }
    double average = (double)sum / 5;
    cout << "Average of the elements present in the array: " << average << endl;

    return 0;
}