/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
constexpr int MAX = 6;

class Stack{
    private:
        int maxSize;
        int top;
        int* stackArray;
    public:
    
        Stack(int stackSize){
            maxSize = stackSize;
            stackArray = new int[maxSize];
            top = -1;
        }
        
        ~Stack(){
            delete[] stackArray;
        }
        
        void pushStack(int data){
            if(isEmpty()){
                std::cout << "Stack is empty" << std::endl;
                std::cout << "Adding " << data << " to the stack" << std::endl;
                stackArray[++top] = data;
                // exit(1);
            }else if(top < maxSize){
                    std::cout << "Adding " << data << " to the stack" << std::endl;
                    stackArray[++top] = data;
                    std::cout << "Added " << data << " to the stack" << std::endl;
            }else{
                std::cout << "Stack overflow" << std::endl;
            }
        }
        
        int popStack(){
            int tempData = 0;
            if(isEmpty()){
                std::cout << "Stack is empty, cannot pop stack" << std::endl;
                return -1;
            }else{
                std::cout << "Popping element at " << top << std::endl;
                tempData = stackArray[top--];
                std::cout << "Popped, top is now" << top <<std::endl;
            }
            return tempData;
        }
        
        void displayStack() const{
            int tempTop = top;
            if(isEmpty()){
                std::cout << "Nothing to display, stack is empty" << std::endl;
            }else{
                while(tempTop >= 0){
                    std::cout << stackArray[tempTop] << " ";
                    tempTop--;
                }
            }
            std::cout << std::endl;
        }
        
        bool isEmpty() const{
            return top == -1;
        }
};

int main(){
    Stack stack(MAX);
    int data = 0;
    for(int i=0;i<MAX;i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> data;
        stack.pushStack(data);
    }
    stack.displayStack();
    stack.popStack();
    stack.popStack();
    stack.displayStack();
    stack.pushStack(10);
    stack.pushStack(11);
    stack.displayStack();
    return 0;
}
