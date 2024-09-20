// Write a program to read a 2D matrix and perform multiplication between them.

import java.util.Scanner;

public class Two_D_matrix_multiplication{
    public static void main(String[] args){
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the number of rows for matrix 1: ");
        int rows1 = read.nextInt();
        System.out.print("Enter the number of columns for matrix 1: ");
        int cols1 = read.nextInt();
        System.out.print("Enter the number of rows for matrix 2: ");
        int rows2 = read.nextInt();
        System.out.print("Enter the number of columns for matrix 2: ");
        int cols2 = read.nextInt();
        int[][] Matrix_1 = new int[rows1][cols1];
        System.out.println("Enter the elements of Matrix 1: ");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                Matrix_1[i][j] = read.nextInt();
            }
        }
        int[][] Matrix_2 = new int[rows2][cols2];
        System.out.println("Enter the elements of Matrix 2: ");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                Matrix_2[i][j] = read.nextInt();
            }
        }
        if(cols1!= rows2){
            System.out.println("Matrices cannot be multiplied!");
        }
        else{
            int[][] result = new int[rows1][cols2];
            for(int i = 0; i < rows1; i++){
                for(int j = 0; j < cols2; j++){
                    for(int k = 0; k < cols1; k++){
                        result[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
                    }
                }
            }
            for(int i = 0; i < rows1; i++){
                for(int j = 0; j < cols2; j++){
                    System.out.print(result[i][j] + " ");
                }
                System.out.println();
            }
        }
        read.close();
    }
}