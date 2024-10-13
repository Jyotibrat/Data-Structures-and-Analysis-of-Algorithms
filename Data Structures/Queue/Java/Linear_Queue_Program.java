import java.util.Scanner;

class Queue{
    int size, front, rear, cap, deq_element;
    int[] queue;
    public Queue(int capacity){
        this.cap = capacity;
        front = rear = -1;
        size = 0;
        queue = new int[capacity];
    }
    public boolean isFull(){
        if (size == cap){
            return true;
        }else{
            return false;
        }
    }
    public boolean isEmpty(){
        if (size == 0){
            return true;
        }else{
            return false;
        }
    }
    public void enqueue(int value){
        if (isFull() || rear == cap - 1){
            System.out.println("Queue is full");
        }else{
            rear++;
            queue[rear] = value;
            size++;
            System.out.println(value + " enqueued in the Queue.\n");
            if (front == -1){
                front = 0;
            }
        }
    }
    public int dequeue(){
        if (isEmpty()){
            return -1;
        }else{
            deq_element = queue[front];
            size--;
            front++;
            if (size == 0){
                front = rear = -1;
            }
            return deq_element;
        }
    }
    public int peek(){
        if (isEmpty()){
            return -1;
        } else{
            return queue[front];
        }
    }
    public void print(){
        if (isEmpty()){
            System.out.println("Queue is Empty\n");
        }else{
            System.out.print("Queue elements are: ");
            for(int i = front; i <= rear; i++){
                System.out.print(queue[i] + " ");
            }
            System.out.println("\n");
        }
    }
}
public class Linear_Queue_Program{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int capacity, opr, value, choice;
        System.out.print("Enter the capacity of the Queue: ");
        capacity = scanner.nextInt();
        System.out.println();
        System.out.print("Enter the number of operations: ");
        opr = scanner.nextInt();
        System.out.println();
        Queue obj = new Queue(capacity);
        while(opr-->0){
            System.out.println("Enter the choice:\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Print\n");
            choice = scanner.nextInt();
            switch(choice){
                case 1: 
                    System.out.print("\nEnter the element you want to enqueue: ");
                    value = scanner.nextInt();
                    System.out.println();
                    obj.enqueue(value);
                    break;
                case 2: 
                    value = obj.dequeue();
                    if (value == -1 && obj.isEmpty() == true){
                        System.out.println("Queue is empty\n");
                    }else{
                        System.out.println("\n" + value + " is dequeued from the Queue.\n");
                    }
                    break;
                case 3:
                    value = obj.peek();
                    if (value == -1 && obj.isEmpty() == true){
                        System.out.println("Queue is empty\n");
                    }else{
                        System.out.println("\n" + value + " is the front element of the Queue.\n");
                    }
                    break;
                case 4:
                    obj.print();
                    break;
                default:
                    System.out.println();
                    System.out.println("Invalid choice!\n");
                    opr++;
                    break;
            }
        }
    }
}