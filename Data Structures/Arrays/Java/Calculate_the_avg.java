// Write a program to read an array and calculate the average of the elements in the array.

import java.util.Scanner;

public class Calculate_the_avg{
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
        double avg = sum/10;
        System.out.println("The average of the elements of the array is: "+ avg);
        read.close();

    }
}