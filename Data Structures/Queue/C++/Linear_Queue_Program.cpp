#include<iostream>
using namespace std;

class Queue{
    public:
        int *queue, size, front, rear, cap;
        Queue(int capacity){
            front = rear = -1;
            size = 0;
            queue = new int[capacity];
            cap = capacity;
        }

        bool isFull(){
            if (size == cap){
                return true;
            }
            else{
                return false;
            }
        }
        bool isEmpty(){
            if (size == 0){
                return true;
            }
            else{
                return false;
            }
        }
        void enqueue(int val){
            if(isFull()){
                cout << "Queue is Full!" << endl << endl;
            }
            else{
                rear++;
                queue[rear] = val;
                size++;
                cout << val << " enqueued in the Queue." << endl << endl;
                if (front == -1){
                    front = 0;
                }
            }
        }
        void dequeue(){
            if(isEmpty()){
                cout << "Queue is Empty!" << endl << endl;
            }
            else{
                cout << queue[front] << " is dequeued from the Queue" << endl << endl;
                front++;
                size--;
            }
        }
        void peek(){
            if (isEmpty()){
                cout << "Queue is Empty!" << endl << endl;
            }
            else{
                cout << "The front element of the Queue is: " << queue[front] << endl << endl;
            }
            
        }
        void print(){
            if (isEmpty()){
                cout << "Queue is Empty!" << endl << endl;
            }
            else{
                cout << "Queue elements are:" << " ";
                for(int i = front; i <= rear; i++){
                    cout << queue[i] << " ";
                }
                cout << endl << endl;
            }
        }
        ~Queue(){
            delete[] queue;
        }
};

int main(){
    int capacity;
    cout << "Enter the capacity of the Queue:" << " ";
    cin >> capacity;
    cout << endl;
    Queue obj(capacity);
    int opr;
    cout << "Enter the number of operations:" << " ";
    cin >> opr;
    cout << endl;
    int choice, element;
    while (opr != 0){
        cout << "Enter the choice:\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Print" << endl << endl;
        cin >> choice;
        opr--;
        switch(choice){
            case 1: 
                cout << "\nEnter the element you want to enqueue:" << " ";
                cin >> element;
                cout << endl;
                obj.enqueue(element);
                break;
            case 2:
                cout << endl;
                obj.dequeue();
                break;
            case 3:
                cout << endl;
                obj.peek();
                break;
            case 4:
                cout << endl;
                obj.print();
                break;
            default:
                cout << endl;
                cout << "Invalid choice!" << endl << endl;
                opr++;
                break;
        }
    }
    

    return 0;
}
