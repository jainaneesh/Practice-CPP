/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

//Class to implement a dynamic array stack
class Stack{
    private:
        int *arr;
        int capacity;
        int top;
    public:
        //Constructor
        Stack(int size){
            capacity = size;
            arr = new int[capacity];
            top = -1;
        }
        
        //Destructor
        ~Stack(){
            delete[] arr;
        }
        //Add elements to the Stack
        void pushStack(float data){
            if(top < capacity){
                arr[++top] = data;
                std::cout << "Added " << data << std::endl;
                // std::cout << " " << top << std::endl;
            }else{
                std::cout << "Stack overflow!!!" << std::endl;
            }
        }
        
        //Pop elements from the stack
        void popStack(){
            if(isEmpty()){
                std::cout << "Cannot pop, stack is empty" << std::endl;
                return;
            }else{
                if(top >= 0){
                    std::cout << "Popped element is " << arr[top--] << std::endl;
                }
            }
        }
        
        //Display the elements of the stack
        void displayStack() const{
            int temp = top;
            if(isEmpty()){
                std::cout << "Stack is empty, cannot display" << std::endl;
            }else{
                while(temp>=0){
                    std::cout << arr[temp--] << " ";
                }
                std::cout << std::endl;
            }
        }
        
        //Check if the stack is empty
        bool isEmpty() const{
            return top == -1;
        }
};
int main()
{
    Stack st(6);
    st.pushStack(2);
    st.pushStack(3);
    st.pushStack(4);
    st.pushStack(5);
    st.pushStack(6);
    st.pushStack(7);
    st.displayStack();
    st.popStack();
    st.popStack();
    st.popStack();
    st.displayStack();
    st.pushStack(6);
    st.pushStack(7);
    st.displayStack();
    return 0;
}
