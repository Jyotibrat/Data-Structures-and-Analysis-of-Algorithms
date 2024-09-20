// Write a program to read an array and find the sum of the elements.

import java.util.Scanner;

public class Calculate_the_sum{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int[] array = new int[10];
        for(int i = 0; i < 10; i++){
            array[i] = read.nextInt();
        }
        int sum = 0;
        for(int i = 0; i < 10; i++){
            sum += array[i];
        }
        System.out.println("The sum of the elements of the array is: " + sum);
        read.close();
    }
}