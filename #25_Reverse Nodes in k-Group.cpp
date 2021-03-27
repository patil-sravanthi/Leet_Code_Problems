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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head,*firstPrev=NULL;
        bool isFirstPass=true;
        while(curr!=NULL){
            ListNode * first=curr,*prev=NULL;
            int count=0;
            while(curr!=NULL && count<k){
                ListNode* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
           if(isFirstPass==true){
               head=prev;
               isFirstPass=false;
           } 
        else{
                firstPrev->next= prev;}
                firstPrev=first; 
        }
         
         return head;
        
        
    }
};
