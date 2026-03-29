#include<iostream>
#include<unordered_map>
using namespace std;

// Node class with 3 things
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {

    // Base case
    if (head == NULL) return NULL;

    // Step 1: create first new node
    Node* newHead = new Node(head->val);
    Node* oldTemp = head->next;
    Node* newTemp = newHead;

    // map old head to new head
    unordered_map<Node*, Node*> m;
    m[head] = newHead;

    // Loop 1: create all copy nodes and map them
    while(oldTemp != NULL) {
        Node* copyNode = new Node(oldTemp->val);
        newTemp->next = copyNode;      // link next
        m[oldTemp]    = copyNode;      // map old to new
        oldTemp       = oldTemp->next; // advance old
        newTemp       = newTemp->next; // advance new
    }

    // Loop 2: assign random pointers using map
    oldTemp = head;
    newTemp = newHead;

    while(oldTemp != NULL) {
        newTemp->random = m[oldTemp->random]; // ✅ key line
        oldTemp = oldTemp->next;
        newTemp = newTemp->next;
    }

    return newHead;
}

int main() {

    // Build original list: 1 → 2 → 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Assign random pointers
    head->random              = head->next->next; // 1 → 3
    head->next->random        = head;             // 2 → 1
    head->next->next->random  = head->next;       // 3 → 2

    // Display original list
    cout << "Original List:" << endl;
    Node* temp = head;
    while(temp != NULL) {
        cout << "val: " << temp->val;
        if(temp->random)
            cout << "  random: " << temp->random->val;
        else
            cout << "  random: NULL";
        cout << endl;
        temp = temp->next;
    }

    // Copy the list
    Node* copiedHead = copyRandomList(head);

    // Display copied list
    cout << "\nCopied List:" << endl;
    temp = copiedHead;
    while(temp != NULL) {
        cout << "val: " << temp->val;
        if(temp->random)
            cout << "  random: " << temp->random->val;
        else
            cout << "  random: NULL";
        cout << endl;
        temp = temp->next;
    }

    // Prove it is a DEEP copy (different addresses)
    cout << "\nOriginal address: " << head << endl;
    cout << "Copied  address: " << copiedHead << endl;

    return 0;
}
