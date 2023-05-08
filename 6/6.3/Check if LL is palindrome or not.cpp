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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prevNode=NULL;
        ListNode* nextNode=NULL;

        //finding middle of linked list
        while(fast&&fast->next){
            slow=slow->next;
            fast=(fast->next)->next;
        }

        //reversing second half of linked list
        prevNode=slow;
        slow=slow->next;
        prevNode->next=NULL;

        while(slow){
            nextNode=slow->next;
            slow->next=prevNode;
            prevNode=slow;
            slow=nextNode;
        }

        //comparing ends of linked list
        slow=head;
        fast=prevNode;

        while(fast){
            if(slow->val!=fast->val) return false;

            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};
