class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *rabbit,*tortoise=head;
        while(rabbit!=NULL && rabbit->next!=NULL){
            rabbit=rabbit->next->next;
            tortoise=tortoise->next;
        }
        return tortoise;
    }
};
