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
    ListNode* partition(ListNode* head, int x) {
        ListNode*lo=new ListNode(100);
        ListNode*hi=new ListNode(100);
        ListNode*tl=lo;
        ListNode*th=hi;
        ListNode*t=head;
        while(t){
            if(t->val<x){
                tl->next=t;
                t=t->next;
                tl=tl->next;
            }
            else{
                th->next=t;
                t=t->next;
                th=th->next;
            }
        }
        tl->next=hi->next;
        th->next=NULL;
        return lo->next;
        
    }
};