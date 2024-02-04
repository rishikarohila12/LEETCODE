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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*tempA=list1;
        ListNode*tempB=list2;
        ListNode* list3=new ListNode(100);
        ListNode*tempC=list3;
        while(tempA!=NULL && tempB!=NULL)
        {
            if(tempA->val<=tempB->val)
            {
                ListNode*t=new ListNode(tempA->val);
                tempC->next=t;
                tempC=t;
                tempA=tempA->next;}
            else{
                ListNode*t=new ListNode(tempB->val);
                tempC->next=t;
                tempC=t;
                tempB=tempB->next;
            }
        }
        if(tempA==NULL)
        {
            tempC->next=tempB;
        }
        else
        {
            tempC->next=tempA;
        }
        return list3->next;
        
    }
};