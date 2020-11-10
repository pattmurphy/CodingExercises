#include <iostream>

class Node{
public:
    int val;
    Node* next;
};

class MyLinkedList {
public:

    Node* head;

    /** Initialize your data structure here. */
    MyLinkedList() {
        head = nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        int i = 0;
        Node* currNode = head;
        while(i < index){
            if(currNode->next == nullptr){
                return -1;
            }
            i++;
            currNode = currNode->next;
        }
        return currNode->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* newNode = new Node();
        newNode->val = val;
        newNode->next = this->head;
        this->head = newNode;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* newNode = new Node();
        newNode->val = val;
        newNode->next = nullptr;

        if(this->head == nullptr){
            this->head = newNode;
            return;
        }

        Node* currNode = this->head;
        while(currNode->next != nullptr){
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node* newNode = new Node();
        newNode->val = val;
        newNode->next = nullptr;

        if(index == 0){
            this->addAtHead(val);
        }

        int i = 0;
        Node* currNode = head;
        while(true){
            if(currNode == nullptr){
                return;
            }
            i++;
            if(i == index){
                newNode->next = currNode->next;
                currNode->next = newNode;
                return;
            }
            currNode = currNode->next;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index == 0){
            this->head = this->head->next;
            return;
        }

        int i = 0;
        Node* currNode = head;
        while(true){
            if(currNode == nullptr){
                return;
            }
            i++;
            if(i == index){
                if(currNode->next == nullptr){
                    currNode->next = nullptr;
                    return;
                }
                if(currNode->next->next == nullptr){
                    currNode->next = nullptr;
                    return;
                }
                currNode->next = currNode->next->next;
            }
            currNode = currNode->next;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(){
    Node head = Node();
    head.val = 10;
    Node node2 = Node();
    node2.val = 20;
    head.next = &node2;
    Node node3 = Node();
    node3.val = 30;
    node2.next = &node3;

    MyLinkedList l = MyLinkedList();
    l.head = &head;
    
    std::cout << l.get(0) << "\n";

    l.addAtHead(100);
    std::cout << l.head->val << "\n";
    std::cout << l.head->next->val << "\n";

    l.addAtTail(40);
    std::cout << l.get(4) << "\n";

    l.addAtIndex(5, 200);
    std::cout << l.get(5) << "\n\n";

    std::cout << l.get(4) << "\n";
    l.deleteAtIndex(4);
    std::cout << l.get(4);

    return 0;
}