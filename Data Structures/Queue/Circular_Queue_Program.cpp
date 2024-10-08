// Write a program to implement Circular Queue.

#include<iostream>
using namespace std;

class Queue{
    public:
        int front, rear, *Arr, cap, size;
        Queue(int capacity){
            cap = capacity;
            Arr = new int[capacity];
            front = rear = -1;
            size = 0;
        }

        bool isEmpty(){
            if (size == 0){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if (size == cap){
                return true;
            }
            else{
                return false;
            }
        }

        void Enqueue(int value){
            if (isFull()){
                cout << "Queue is Full." << endl << endl;
            }
            else{
                rear = (rear + 1) % cap;
                Arr[rear] = value;
                size++;
                if (front == -1){
                    front = rear;
                }
            }
        }

        void Dequeue(){
            if (isEmpty()){
                cout << "Queue is Empty." << endl;
                cout << endl;
            }
            else{
                cout << "Dequeued element is: " << Arr[front] << endl;
                front = (front + 1) % cap;
                size--;
                if (size == 0){
                    front = rear = -1;
                }
            }
        }

        void Peek(){
            if (size == 0){
                cout << "Queue is Empty" << endl << endl;
            }
            else{
                cout << "The front element is: " << Arr[front] << endl << endl;
            }
        }

        void Print(){
            if (size == 0){
                cout << "Queue is Empty" << endl << endl;
            }
            else{
                    
                for (int i = 0; i < size; i++){
                    cout << Arr[(front + 1) % cap] << " ";
                }
                cout << endl;
            }
        }

        ~Queue(){
            delete[] Arr;
        }
};
int main(){
    int capacity, opr;
    cout << "Enter the capacity of the circular queue: ";
    cin >> capacity;
    cout << endl;

    Queue obj(capacity);

    cout << "Enter the number of operations: ";
    cin >> opr;
    cout << endl;

    while (opr--){
        int choice, value;
        cout << "Enter: \n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Print\n\n";
        cin >> choice;
        switch(choice){
            case 1:
                cout << endl;
                cout << "Enter the value to enqueue: ";
                cin >> value;
                cout << value << " has been enqueued." << endl << endl; 
                obj.Enqueue(value);
                break;
            case 2:
                obj.Dequeue();
                break;
            case 3:
                obj.Peek();
                break;
            case 4:
                obj.Print();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                opr++;
                break;
        }
    
    }

    return 0;
}