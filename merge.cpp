#include<iostream>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// LinkedList class
class LinkedList {
public:
    ListNode* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at end
    void insertEnd(int value) {
        ListNode* newNode = new ListNode(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display list
    void display() {
        ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Merge Two Sorted Lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    // Base cases
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main() {
    LinkedList l1, l2;

    // Build list1 → 1 → 3 → 5
    l1.insertEnd(1);
    l1.insertEnd(3);
    l1.insertEnd(5);

    // Build list2 → 2 → 4 → 6
    l2.insertEnd(2);
    l2.insertEnd(4);
    l2.insertEnd(6);

    cout << "List 1: ";
    l1.display();

    cout << "List 2: ";
    l2.display();

    // Merge both lists
    ListNode* mergedHead = mergeTwoLists(l1.head, l2.head);

    // Display merged list
    cout << "Merged: ";
    ListNode* temp = mergedHead;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
