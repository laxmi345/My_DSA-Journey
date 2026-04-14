
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        // Traverse both lists while they have nodes
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        // Attach remaining nodes from either list
        current->next = list1 ? list1 : list2;

        // Return the head of the merged list (skip dummy node)
        return dummy->next;
    }
};