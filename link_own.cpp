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
    // Constructor
    LinkedList() {
        head = NULL;
    }
    void push_front(int value){
        Node*newnode=new Node(value);
        newnode->next=head;
        head=newnode;
    }
    void push_back(int value){
        Node*newnode=new Node(value);
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            
            temp=temp->next;
        }
             cout << "NULL" << endl;
    }
    void add_point(int pos,int value){
        Node*temp=head;
         Node*newnode=new Node(value);
        int i=1;
        while(i!=pos-1){
            temp=temp->next;
            i++;



        }
       newnode->next=temp->next;
       temp->next=newnode;
        
    }
    

    
};
int main(){
    LinkedList List;
    List.push_front(67);
    List.push_back(89);
    List.display();
    List.add_point(2,89);
     List.display();
    return 0;
}