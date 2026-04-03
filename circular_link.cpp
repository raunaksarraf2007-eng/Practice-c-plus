#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*previous;

    Node(int value){
        data=value;
        next=NULL;
    
    }
 };
 class Linklist{
    private:
    Node*head;
    Node*tail;

    public:
    Linklist(){
        head=NULL;
        tail=NULL;

    }
    void pushfront(int value){
        Node*newnode=new Node(value);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
            tail->next=newnode;
        }

    }
    void display(){
    if(head == NULL){
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);

    cout << "(back to head)\n";
}
};
int main(){
    Linklist list;
    list.pushfront(56);
    list.pushfront(56);list.pushfront(78);list.pushfront(89);
    list.display();

    return 0;
}