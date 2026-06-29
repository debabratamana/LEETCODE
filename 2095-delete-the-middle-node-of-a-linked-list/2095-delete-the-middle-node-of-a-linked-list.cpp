/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) // if head is null or next point is null 
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) { 
            // fast check the value is null or not when value is null
            // slow is the medile point of the linklist
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        
        prev->next = slow->next; // delect the medile node 

        delete slow;   

        return head;
    }
};