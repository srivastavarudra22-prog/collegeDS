// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

class Node{
public:
    int data ;
    Node* next ;
    
    Node(int val){
        data = val;
        next = NULL ;
    }
};
class LinkedList{
    public:
        Node* head ;
        Node* tail ;
        LinkedList(){
            head = tail = NULL ;
        }
        void pushFront(int val){
            Node* node = new Node(val) ;
            if(head == NULL){
                head = tail = node;
                return ;
            }
            else{
                node->next = head ;
                head = node ;
            }
        }
        void pushBack(int val){
            Node* node = new Node(val);
            if(tail == NULL){
                head = tail = node;
                return ;
            }
            tail->next = node ;
            tail = node ;
        }
        void printList(){
            Node* temp = head ;
            while(temp!=NULL){
                cout<<temp->data<<"-->";
                temp = temp->next ;
            }
        }
};

int main() {
    // Write C++ code here
    LinkedList linkedList ;
    linkedList.pushBack(20);
    linkedList.pushFront(5);
    linkedList.pushFront(6);
    linkedList.pushFront(7);
    linkedList.pushFront(10);
    linkedList.pushBack(4);
    linkedList.printList();
    return 0;
}