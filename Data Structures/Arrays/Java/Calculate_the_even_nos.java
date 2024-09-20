// Write a program to read an array and count the number of even numbers are there.

import java.util.Scanner;

public class Calculate_the_even_nos
{
    public static void main(String args[])
    {
        Scanner read = new Scanner(System.in);
        int[] array = new int[10];
        for(int i = 0; i < 10; i++){
            array[i] = read.nextInt();
        }
        int count = 0;
        for(int i = 0; i < 10; i++){
            if(array[i] % 2 == 0){
                count++;
            }
        }
        System.out.println("The number of even numbers in the array is: " + count);
        read.close();
    }
}