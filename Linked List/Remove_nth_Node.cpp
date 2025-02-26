class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Edge case: Empty list
        if (!head) return nullptr;

        // Create a dummy node to simplify edge cases (e.g., removing head node)
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Initialize fast and slow pointers
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move the fast pointer `n + 1` steps ahead to maintain the gap
        for (int i = 0; i <= n; i++) {
            if (fast) {
                fast = fast->next;
            } else {
                // If `n` is greater than the length of the list, return the original list
                return head;
            }
        }

        // Move both pointers until fast reaches the end
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from the end
        ListNode* deletet = slow->next;
        slow->next = deletet->next;
        delete deletet;

        // Return the new head
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
