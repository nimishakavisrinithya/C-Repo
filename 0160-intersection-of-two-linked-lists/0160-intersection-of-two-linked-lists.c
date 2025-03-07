/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p1 = headA;
    struct ListNode *p2 = headB;
    while(p1 || p2){
    if(p1==NULL) p1 = headB;
    if(p2==NULL) p2 = headA;
    if(p1==p2) break;
        p1 = p1->next;
        p2 = p2->next;
}
return p2;
}