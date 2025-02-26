class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head; // Return early if the list is empty or has one element
        }

        ListNode* odd = head;             // Start with the head for odd nodes
        ListNode* even = head->next;      // Start with the second node for even nodes
        ListNode* evenHead = even;        // Store the head of the even list to reconnect later

        // Iterate through the list, separating odd and even nodes
        while (even != nullptr && even->next != nullptr) {
            odd->next = odd->next->next;  // Skip the even node and move odd pointer
            even->next = even->next->next; // Skip the next odd node and move even pointer

            odd = odd->next;   // Move the odd pointer to the next odd node
            even = even->next; // Move the even pointer to the next even node
        }

        // Connect the end of the odd list to the head of the even list
        odd->next = evenHead;

        return head;
    }
};
