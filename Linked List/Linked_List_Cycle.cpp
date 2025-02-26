/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Step 1: Apply Tortoise and Hare algorithm to detect the cycle
        ListNode* slow = head;
        ListNode* fast = head;
        bool hasCycle = false;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) { // Cycle detected
                hasCycle = true;
                break;
            }
        }

        // If no cycle is detected, return nullptr
        if (!hasCycle) {
            return nullptr;
        }

        // Step 2: Reset slow to head and find the start of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // Starting node of the cycle
    }
};
