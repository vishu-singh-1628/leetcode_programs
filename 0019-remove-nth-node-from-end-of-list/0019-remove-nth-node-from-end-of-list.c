/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode*last,*pre;
    int count =0;
    last=head;
    pre=head;
    for(int i=0;i<n;i++){
        last=last->next;
    }
    if (last==NULL){
        return head->next;
    }
    while(last->next!= NULL){
        count++;
        last=last->next;
        pre=pre->next;
       
    }
    pre->next=pre->next->next;
  
    
    return head;
}