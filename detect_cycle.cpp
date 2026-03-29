#include<iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at end
    void insertEnd(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
     void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            
            temp=temp->next;
        }
             cout << "NULL" << endl;
    }

    // Create loop: last node → position
    void createLoop(int position) {
        if (head == NULL) return;

        Node* loopNode = NULL;
        Node* temp = head;
        int count = 1;

        // Find node at given position
        while (temp->next != NULL) {
            if (count == position) {
                loopNode = temp;
            }
            temp = temp->next;
            count++;
        }

        // Connect last node to loopNode
        if (loopNode != NULL) {
            temp->next = loopNode;
        }
    }

    void detectLoop(){
        Node*slow=head;
        Node*fast=head;
        bool rp= false;
         while(fast!=NULL && fast->next!=NULL ){
            slow=head->next;
            fast=fast->next;
            if (fast==slow)
            {
               rp=true;
            }
            else{
                rp=false;
            }

         }
         cout<<rp;
    }
};

// Main function
int main() {
    LinkedList list;

    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);

    // Create loop at position 3 (node with value 3)
    list.createLoop(3);

    // Detect loop
    list.detectLoop();

    return 0;
}