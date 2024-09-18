// Write a program to read an array and find the position of the prime numbers in the array.

#include<iostream>
using namespace std;

int main() {
    int Array[5];
    for (int i = 0; i < 5; i++) {
        cin >> Array[i];
    }
    
    int result[5], count, index = 0;
    
    for (int i = 0; i < 5; i++) {
        count = 0;
        
        for (int j = 1; j <= Array[i]; j++) {
            if (Array[i] % j == 0) {
                count++;
            }
        }
        
        if (count == 2) {
            result[index] = i;
            index++;
        }
    }
    
    for (int i = 0; i < index; i++) {
        cout << result[i] << " ";
    }

    if (index == 0) {
        cout << "No prime numbers found.";
    }
    
    return 0;
}