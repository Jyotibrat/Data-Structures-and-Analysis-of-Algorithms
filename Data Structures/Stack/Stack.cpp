#include<iostream>
using namespace std;

class Stack{
    public:
        int top, capacity;
        int* stack;
        Stack(int size){
            capacity = size;
            stack = new int[capacity];
            top = -1;
        }
        bool isEmpty(){
            if (top == - 1){
                return true;
            }else{
                return false;
            }
        }
        bool isFull(){
            if (top == capacity - 1){
                return true;
            }else{
                return false;
            }
        }
        void push(int value){
            if (isFull()){
                cout << "Stack is Full" << endl;
            }else{
                top++;
                stack[top] = value;
                cout << value << " pushed to stack" << endl;
            }
        }
        int pop(){
            if (isEmpty()){
                return -1;
            }else{
                int value = stack[top];
                top--;
                return value;
            }
        }
        int peek(){
            if (isEmpty()){
                return -1;
            }else{
                return stack[top];
            }
        }
        int size(){
            return top + 1;
        }
        ~Stack(){
            delete[] stack;
        }
};
int main(){
    int size, opr, choice, value;
    cout << "Enter the size of the stack: ";
    cin >> size;
    cout << endl;
    Stack s(size);
    cout << "Enter the number of operations: ";
    cin >> opr;
    while(opr--){
        cout << "\nEnter the choice:\n\n1. push into the stack\n2. pop from the stack\n3. peek from the stack\n4. size of the stack\n\n";
        cin >> choice;
        switch(choice){
            case 1: cout << "Enter the value that you want to push into the stack: ";
                    cin >> value;
                    s.push(value);
                    break;

            case 2: if (s.pop() == -1){
                        cout << "Stack is Empty" << endl;
                    }else{
                        cout << s.pop() << " is popped from the stack" << endl;
                    }
                    break;

            case 3: if (s.peek() == -1){
                        cout << "Stack is Empty" << endl;
                    }else{
                        cout << s.peek() << " is the top number of the stack" << endl;
                    }
                    break;

            case 4: cout << s.size() << " is the size of the stack" << endl;
                    break;

            default: cout << "Entered the wrong choice!!\nTry Again" << endl;
                    opr++;
                    break;

        }
    }
    return 0;
}