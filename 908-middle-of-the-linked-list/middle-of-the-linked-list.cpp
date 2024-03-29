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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* fast = head;
        ListNode* slow = head;

        if(head==NULL || head->next==NULL)
        {
            return slow;
        }
        while(slow!=NULL && fast!=NULL){
            fast = fast->next;            
            if(fast!=NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }        

        return slow;

    }
};