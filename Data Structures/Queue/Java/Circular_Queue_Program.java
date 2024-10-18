// Write a program to implement Circular Queue.

import java.util.Scanner;

class Queue{
    int front, rear, size, cap;
    int[] queue;
    Queue(int capacity){
        cap = capacity;
        front = rear = -1;
        size = 0;
        queue = new int[cap];
    }
    public boolean isEmpty(){
        if (size == 0)
            return true;
        else
            return false;
    }
    public boolean isFull(){
        if (size == cap)
            return true;
        else
            return false;
    }
    public void Enqueue(int value){
        if (isFull())
            System.out.println("Circular Queue is Full!");
        else{
            rear = (rear + 1) % cap;
            queue[rear] = value;
            size++;
            if (front == -1)
                front = rear;
            System.out.println(value + " has been Enqueued to the Circular Queue.");
        }
    }
    public int Dequeue(){
        if (isEmpty())
            return -1;
        else{
            int value = queue[front];
            front = (front + 1) % cap;
            size--;
            if (size == 0)
                front = rear = -1;
            return value;
        }
    }
    public int Peek(){
        if (isEmpty())
            return -1;
        else
            return queue[front];
    }
    public void print(){
        if (isEmpty())
            System.out.println("Circular Queue is Empty!");
        else{
            System.out.print("Circular Queue elements: ");
            int i = front;
            while (i!= rear){
                System.out.print(queue[i] + " ");
                i = (i + 1) % cap;
            }
            System.out.println(queue[rear]);
        }
    }
}
public class Circular_Queue_Program{
    public static void main(String[] args){
        int capacity, value, choice, opr;
        boolean flag = true;
        Scanner read = new Scanner(System.in);
        System.out.print("Enter the capacity of the Circular Queue: ");
        capacity = read.nextInt();
        Queue obj = new Queue(capacity);
        System.out.print("Enter the number of operations: ");
        opr = read.nextInt();
        while (opr-- > 0){
            System.out.print("\nEnter the operation:\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. print\n\n");
            choice = read.nextInt();
            switch(choice){
                case 1:
                    System.out.print("Enter the element you want to add in the Circular Queue: ");
                    value = read.nextInt();
                    obj.Enqueue(value);
                    break;
                case 2: 
                    flag = obj.isEmpty();
                    value = obj.Dequeue();
                    if (value == -1 && flag == true)
                        System.out.println("Circular Queue is Empty!");
                    else
                        System.out.println(value + " has been Dequeued from the Circular Queue.");
                    break;
                case 3:
                    flag = obj.isEmpty();
                    value = obj.Peek();
                    if (value == -1 && flag == true)
                        System.out.println("Circular Queue is Empty!");
                    else
                        System.out.println(value + " is the front element of the Circular Queue.");
                    break;
                case 4:
                    obj.print();
                    break;
                default:
                    System.out.println("Invalid Operation!");
                    opr++;
                    break;
            }
        }
    }
}