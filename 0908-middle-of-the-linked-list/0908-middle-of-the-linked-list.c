/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* h=head, *t= head;
    int c=0;
    while(h!=NULL && h->next!=NULL){
        t=t->next;
         h=h->next->next;
    }
    printf("%d", c);
    return t;
}