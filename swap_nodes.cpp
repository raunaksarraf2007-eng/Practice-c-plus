class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {  // == not =
            return head;                            // return head, not NULL
        }
        ListNode* first = head;                     // ListNode* not Node*
        ListNode* second = head->next;              // ListNode* not Node*
        first->next = swapPairs(second->next);      // next not nexxt
        second->next = first;
        return second;
    }
};