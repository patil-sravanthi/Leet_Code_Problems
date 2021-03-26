class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prevsptr=NULL;
        ListNode *currptr=head;
        ListNode *nextptr;
        while(currptr!=NULL){
            nextptr=currptr->next;  //we can't go to next node if we wont do this
            currptr->next=prevsptr;   //when we write 12345 bcoz 54321 but from 1 it does currptr=1  next of it is prevsptr over here initially it is null
            
            prevsptr=currptr;  //always increase 3 pts by 1 over here we r dng only 2prevsptr ,currptr but not nextptr bcoz it will be covered inside while loop 1st step
            currptr=nextptr;
        }
        return prevsptr; //need to return newly generated head that is pointing by prevsptr 
        
    }
};
