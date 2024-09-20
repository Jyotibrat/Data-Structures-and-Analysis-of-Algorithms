// Write a program to read an array and find the position of the prime numbers in the array.

import java.util.Scanner;
import java.util.ArrayList;

public class Find_the_position_of_prime_no{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int[] Array = new int[5];
        System.out.println("Enter the numbers of the array: ");
        for(int i = 0; i < 5; i++){
            Array[i] = read.nextInt();
        }
        int index = 0;
        int result[] = new int[5];
        int count;
        for(int i = 0; i < 5; i++){
            count = 0;
            for(int j = 1; j <= Array[i]; j++){
                if (Array[i] % j == 0){
                    count++;
                }
            }
            if (count == 2){
                result[index] = i;
                index++;
            }
        }
        for(int i = 0; i < index; i++){
            System.out.print(result[i] + " ");
        }
        read.close();
    }
}