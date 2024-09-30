/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

struct Node{
    int data;
    Node* nextPtr;
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
        
        ~LinkedList(){
            Node* current = head;
            Node* nextNode;
            
            while(current->nextPtr != nullptr){
                nextNode = current->nextPtr;
                delete current;
                current = nextNode;
            }
        }
        
        void appendList(int data){
            Node* newNode = new Node();
            std::cout << "Adding " << data << " to the list" << std::endl;
            newNode->data = data;
            newNode->nextPtr = nullptr;
            
            if(head == nullptr){
                head = newNode;
                // newNode = temp;
            }else{
                Node* temp = head;
                while(temp->nextPtr != nullptr){
                    temp = temp->nextPtr;
                }
                temp->nextPtr = newNode;
            }
            
            // newNode = newNode->nextPtr;
        }
        void displayList() const{
            Node* temp;
            if(isEmpty()){
                exit(1);
            }else{
                temp = head;
                std::cout << "Your linked list is:" << std::endl;
                while(temp != nullptr){
                    std::cout << temp->data << " ";
                    temp = temp->nextPtr;
                }
            }
            delete temp;
        }
        
        void countNode() const{
            int count = 0;
            Node* temp = head;
            if(isEmpty()){
                delete temp;
                exit(1);
            }else{
                while(temp != nullptr){
                    count++;
                    temp = temp->nextPtr;
                }
            }
            std::cout << "Total number of nodes: " << count << std::endl;
        }
        
        int isEmpty() const{
            return head == nullptr;
        }
};
int main()
{
    LinkedList list;
    int data = 0, count = 5;
    std::cout<<"Starting the program for linked list" << std::endl;
    for(int i=0;i<count;i++){
        std::cout << "Enter data: ";
        std::cin >> data;
        list.appendList(data);
    }
    list.displayList();
    list.countNode();

    return 0;
}
