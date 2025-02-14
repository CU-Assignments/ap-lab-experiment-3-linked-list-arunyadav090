// 206. Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
          // Initialize pointers
        ListNode* prev = nullptr; // Previous node starts as NULL
        ListNode* next = nullptr; // Next node
        ListNode* curr = head;    // Current node starts at the head

        // Traverse the list
        while (curr != nullptr) {
            // Save the next node
            next = curr->next;

            // Reverse the link
            curr->next = prev;

            // Move pointers forward
            prev = curr; // Move prev to the current node
            curr = next; // Move curr to the next node
        }

        // prev is now the new head of the reversed list
        return prev;
    }
};
*test case*
//   Input
// head =
// [1,2,3,4,5]
// Output
// [5,4,3,2,1]
// Expected
// [5,4,3,2,1]
