// Write a program to read an array and search for an number if it is present in the matrix or not.

import java.util.Scanner;

public class Search_in_a_matrix{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        int[][] Array = new int[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                Array[i][j] += read.nextInt();
            }
        }
        System.out.print("Enter the number you want to search in the matrix: ");
        int search = read.nextInt();
        boolean flag = false;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if (Array[i][j] == search){
                    flag = true;
                    break;
                }
            }
            if (flag == true){
                break;
            }
        }
        if (flag == true){
            System.out.println("The number is present in the matrix.");
        }
        else{
            System.out.println("The number is not present in the matrix.");
        }
        read.close();
    }
}