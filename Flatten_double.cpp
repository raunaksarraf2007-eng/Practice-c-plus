#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*previous;
    Node*child;

    Node(int value){
        data=value;
        next=NULL;
        previous=NULL;
        child=NULL;


    }
 };
 class Linklist{
    private:
    Node*head;

    public:
    Linklist(){
        head=NULL;
    }
    void pushfront(int data){
        Node*newnode=new Node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            newnode->next=head;
            head->previous=newnode;
            head=newnode;
        }

    }
    void display(){
        Node*temp=head;
        if (head==NULL)
        {
            cout<<"no node at this point";
        }
        else{
            while(temp!=NULL){
                cout<<temp->data<<"->"<<"<-";
                temp=temp->next;
            }
        }
        

    }

 };

int main(){
    Linklist List;
    List.pushfront(56);

    List.pushfront(89);
    List.display();
    return 0;
}