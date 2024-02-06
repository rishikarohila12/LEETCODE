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
ListNode*reverse(ListNode*head){
    ListNode*prev=NULL;
     ListNode*Next=NULL;
     ListNode*curr=head;
     while(curr)
     {
         Next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=Next;
     }
     return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*newh=reverse(slow->next);
        ListNode*a=head;
        ListNode*b=newh;
        while(b)
        {
        if(a->val!=b->val)return false;
        else{
            a=a->next;
            b=b->next;
        }
        }
        
        return true;
    }
};