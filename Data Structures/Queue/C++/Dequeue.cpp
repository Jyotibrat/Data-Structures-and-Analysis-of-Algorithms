#include<iostream>
using namespace std;

class Dequeue{
    public:
        int *queue, size, cap, front, rear;
        Dequeue(int capacity){
            queue = new int[capacity];
            size = 0;
            cap = capacity;
            front = rear = -1;
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
        void insertFront(int val){
            if (isFull()){
                cout << "Dequeue is Full!" << endl;
            }
            else{
                if (size == 0){
                    front = rear = 0;
                }
                else if (front == 0){
                    front = cap - 1; 
                }
                else{
                    front--;
                }
                queue[front] = val;
                size++;
                cout << "The element " << val << " has been enqueued in the Dequeue from the front" << endl; 
            }
        }
        void insertRear(int val){
            if (isFull()){
                cout << "Dequeue is Full!" << endl; 
            }
            else{
                if (size == 0){
                    front = rear = 0;
                }
                else if (rear == cap - 1){
                    rear = 0;
                }
                else{
                    rear++;
                }
                queue[rear] = val;
                size++;
                cout << "The element " << val << " has been enqueued in the Dequeue from the rear" << endl; 
            }
        }
        void deleteFront(){
            if (isEmpty()){
                cout << "Dequeue is Empty!" << endl;
            }
            else{
                cout << queue[front] << " has been dequeued from the front of the Dequeue " << endl;
                if (size == 1){
                    
                    front = rear = -1;
                }
                else if (front = cap - 1){
                    front = 0;
                }
                else{
                    front++;
                }
                size--;
            }
        }
        void deleteRear(){
            if (isEmpty()){
                cout << "Dequeue is Empty!" << endl;
            }
            else{
                cout << queue[rear] << " has been dequeued from the rear of the Dequeue " << endl;
                if (size == 1){
                    front = rear = -1;
                }
                else if (rear == 0){
                    rear = cap - 1;
                }
                else{
                    rear--;
                }
                size--;
            }
        }
        void getFront(){
            if (isEmpty()){
                cout << "Dequeue is Empty!" << endl;
            }
            else{
                cout << "The Front element of the Dequeue is: " << queue[front] << endl;
            }
        }
        void getRear(){
            if (isEmpty()){
                cout << "Dequeue is Empty!" << endl;
            }
            else{
                cout << "The Rear element of the Dequeue is: " << queue[rear] << endl;
            }
        }
        void print(){
            if (isEmpty()){
                cout << "Dequeue is Empty!" << endl;
            }
            else{
                int i = front;
                while(true){
                    cout << queue[i] << " ";
                    if (i == rear){
                        break;
                    }
                    i = (i + 1) % cap;
                }
                cout << endl;
            }
        }
};

int main(){
    int capacity;
    cout << "Enter the capacity of the Dequeue:" << " ";
    cin >> capacity;
    cout << endl;
    Dequeue obj(capacity);
    int opr, choice, value;
    cout << "Enter the number of operations:" << " ";
    cin >> opr;
    while(opr != 0){
        cout << "\nEnter the choice:\n\n1. Insert from front\n2. Insert from rear\n3. Delete from front\n4. Delete from rear\n5. Get front element\n6. Get rear element\n7. Print elements\n\n";
        cin >> choice;
        cout << endl;
        switch (choice){
            case 1: 
                cout << "Enter the number you want to add in the front:" << " ";
                cin >> value;
                cout << endl;
                obj.insertFront(value);
                break;
            case 2:
                cout << "Enter the number you want to add in the rear:" << " ";
                cin >> value;
                cout << endl;
                obj.insertRear(value);
                break;
            case 3:
                obj.deleteFront();
                break;
            case 4:
                obj.deleteRear();
                break;
            case 5:
                obj.getFront();
                break;
            case 6:
                obj.getRear();
                break;
            case 7:
                obj.print();
                break;
            default:
                cout << "Invalid Choice! Try Again" << endl;
                opr++;
                break;
        }
        opr--;
    }
    return 0;
}
