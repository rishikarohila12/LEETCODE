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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*evenHead=new ListNode(100);
        ListNode*even=evenHead;
         ListNode*oddHead=new ListNode(0);
           ListNode*odd=oddHead;
           ListNode*curr=head;
           int i=1;
           while(curr){
               if(i%2!=0){
                   odd->next=curr;
                   odd=odd->next;
                   
               }
               else{
                   even->next=new ListNode(curr->val);
                   even=even->next;
                   
               }
               i++;
               curr=curr->next;
           }
           odd->next=evenHead->next;
           return oddHead->next;
        
    }
};