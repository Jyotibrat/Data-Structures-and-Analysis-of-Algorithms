// Write a program to add 1 to all the numbers of a 2D array.

public class Add_1_to_all_numbers
{
    public static void main(String args[])
    {
        int[][] array = new int[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                array[i][j] += 1;
            }
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
        
    }
}