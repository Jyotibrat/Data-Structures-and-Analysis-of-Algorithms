// Write a program to read an array and count the number of even numbers are there.

#include<iostream>
using namespace std;

int main(){
    int Array[5];
    for(int i = 0; i < 5; i++){
        cin >> Array[i];
    }
    
    int evenCount = 0;
    for(int i = 0; i < 5; i++){
        if (Array[i] % 2 == 0){
            evenCount++;
        }
    }
    cout << "Number of even numbers in the array: " << evenCount << endl;
    return 0;
}