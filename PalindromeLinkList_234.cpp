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
ListNode* reverseList(ListNode*head)
{
    ListNode*prev=NULL;
    ListNode*Next=head;
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
        ListNode*c=new ListNode(10);
        ListNode*temp=head;
        ListNode*tempC=c;
        while(temp)
        {
            ListNode*node=new ListNode(temp->val);
            tempC->next=node;
            temp=temp->next;
            tempC=tempC->next;
        }
        c=c->next;
        c=reverseList(c);
        ListNode*a=head;
        ListNode*b=c;
        while(a)
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