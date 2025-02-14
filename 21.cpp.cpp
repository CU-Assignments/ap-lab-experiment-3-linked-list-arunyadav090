class Solution {
public:
  if (l1 == NULL) return l2; // If l1 is empty, return l2 ✅
        if (l2 == NULL) return l1; // If l2 is empty, return l1 ✅
        
        if (l1->val > l2->val) swap(l1, l2); // Ensure l1 starts with the smaller value 🔄
        
        ListNode* ans = l1; // Head of the merged list
        
        while (l1 != NULL && l2 != NULL) {
            ListNode* temp = NULL;
            while (l1 != NULL && l1->val <= l2->val) { // Move l1 forward
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2; // Insert l2 node
            
            swap(l1, l2); // Swap l1 and l2 to continue merging
        }
        return ans; // Return the merged list head
    }
};
