#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;  // link to previous top
        top = newNode;        // update top
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;     // store current top
        cout << temp->data << " popped\n";
        top = top->next;      // move top to next node
        delete temp;          // free memory
    }

    // Peek (top element)
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.peek() << endl;

    s.pop();

    cout << "Top after pop: " << s.peek() << endl;

    return 0;
}