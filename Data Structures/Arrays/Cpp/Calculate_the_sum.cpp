// Write a program to read an array and find the sum of the elements.

#include<iostream>
using namespace std;

int main(){
    int Array[10];
    for(int i = 0; i < 10; i++){
        cin >> Array[i];
    }
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += Array[i];
    }
    cout << "The Sum of the elements of the Array: " << sum << endl;
    return 0;
}