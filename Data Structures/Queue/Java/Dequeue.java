import java.util.Scanner;

class Queue{
    int size, cap, front, rear, dequeue_element;
    int[] queue;
    Queue(int capacity){
        cap = capacity;
        front = rear = -1;
        size = 0;
        queue = new int[cap];
    }
    public boolean isEmpty(){
        if (size == 0){
            return true;
        }else{
            return false;
        }
    }
    public boolean isFull(){
        if (size == cap){
            return true;
        }else{
            return false;
        }
    }
    public void insert_front(int value){
        if (isFull()){
            System.out.println("Dequeue is full!");
        }else{
            if (size == 0){
                front = rear = 0;
            }else if (front == 0){
                front = cap - 1;
            }else{
                front--;
            }
            queue[front] = value;
            size++;
            System.out.println(value + " is enqueued at the front of the Dequeue.");
        }
    }
    public void insert_rear(int value){
        if (isFull()){
            System.out.println("Dequeue is full!");
        }else{
            if (size == 0){
                front = rear = 0;
            }else if (rear == cap - 1){
                rear = 0;
            }else{
                rear++;
            }
            queue[rear] = value;
            size++;
            System.out.println(value + " is enqueued at the rear of the Dequeue.");
        }
    }
    public int delete_front(){
        if (isEmpty()){
            return -1;
        }else{
            dequeue_element = queue[front];
            if (size == 1){
                front = rear = -1;
            }else if (front == cap - 1){
                front = 0;
            }else{
                front++;
            }
            size--;
            return dequeue_element;
        }
    }
    public int delete_rear(){
        if (isEmpty()){
            return -1;
        }else{
            dequeue_element = queue[rear];
            if (size == 1){
                front = rear = -1;
            }else if (rear == 0){
                rear = cap - 1;
            }else{
                rear--;
            }
            size--;
            return dequeue_element;
        }
    }
    public int get_front(){
        if (isEmpty()){
            return -1;
        }else{
            return queue[front];
        }
    }
    public int get_rear(){
        if (isEmpty()){
            return -1;
        }else{
            return queue[rear];
        }
    }
    public void print(){
        if (isEmpty()){
            System.out.println("Dequeue is Empty!");
        }else{
            int i = front;
            System.out.print("The elements in the Dequeue: ");
            while(true){
                System.out.print(queue[i] + " ");
                if (i == rear){
                    break;
                }
                i = (i + 1) % cap;
            }
            System.out.println();
        }
    }
}
public class Dequeue{
    public static void main(String[] args){
        int capacity, opr, value, choice;
        System.out.print("Enter the capacity of the Dequeue: ");
        Scanner scanner = new Scanner(System.in);
        capacity = scanner.nextInt();
        Queue obj = new Queue(capacity);
        System.out.print("Enter the number of operations: ");
        opr = scanner.nextInt();
        while (opr-- > 0){
            System.out.println("\nEnter the choice:\n\n1. Insert from front\n2. Insert from rear\n3. Delete from front\n4. Delete from rear\n5. Get front element\n6. Get rear element\n7. Print elements\n");
            choice = scanner.nextInt();
            switch(choice){
                case 1:
                    System.out.print("Enter the number you want to add in the front: ");
                    value = scanner.nextInt();
                    obj.insert_front(value);
                    break;
                case 2:
                    System.out.print("Enter the number you want to add in the rear: ");
                    value = scanner.nextInt();
                    obj.insert_rear(value);
                    break;
                case 3:
                    value = obj.delete_front();
                    if (value == -1)
                    System.out.println("Dequeue is empty!");
                    else
                    System.out.println(value + " is dequeued from the front of the Dequeue.");
                    break;
                case 4:
                    value = obj.delete_rear();
                    if (value == -1)
                    System.out.println("Dequeue is empty!");
                    else
                    System.out.println(value + " is dequeued from the rear of the Dequeue.");
                    break;
                case 5:
                    value = obj.get_front();
                    if (value == -1)
                    System.out.println("Dequeue is empty!");
                    else
                    System.out.println("Front element is: " + value);
                    break;
                case 6:
                    value = obj.get_rear();
                    if (value == -1)
                    System.out.println("Dequeue is empty!");
                    else
                    System.out.println("Rear element is: " + value);
                    break;
                case 7:
                    obj.print();
                    break;
                default:
                    System.out.println("Invalid choice!");
                    opr++;
                    break;
            }
        }

    }
}
