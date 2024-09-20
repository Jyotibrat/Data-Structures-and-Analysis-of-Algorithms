// Write a Program to Read an array.

import java.util.Scanner;

public class Read_an_array{
    public static void main(String[] args){
    
        Scanner read = new Scanner(System.in);
        int Array[] = new int[5];
        System.out.println("Enter the elements of the array: ");
        for(int i = 0; i < 5; i++){
            Array[i] = read.nextInt();
        }
        for(int i = 0; i < 5; i++){
            System.out.print(Array[i] + " ");
        }
        read.close();
    }
}