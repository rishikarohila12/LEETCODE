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
ListNode* reverse(ListNode*head){
    ListNode*Next=NULL;
    ListNode*prev=NULL;
    ListNode*curr=head;
    while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;

    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(head ==NULL|| head->next==NULL)return head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            }
            // ListNode*c=new ListNode(0);
            ListNode*c=slow->next;
            slow->next=NULL;
            c=reverse(c);
            ListNode*a=head;
            ListNode*b=c;
             while(a&&b){
                if(a->val !=b->val)return false;
                a=a->next;
                b=b->next;
               
            }
            return true;        
    }
};