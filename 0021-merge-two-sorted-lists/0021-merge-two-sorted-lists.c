/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* p1;
    struct ListNode* p2;
    struct ListNode* p3;
    int temp;
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;
    p1=list1;
    while(p1->next!=NULL)
    {
        p1=p1->next;
    }
    p1->next=list2;
    p2=list1;
    while(p2!=NULL)
    {
        p3=p2->next;
        while(p3!=NULL)
        {
            if(p2->val>p3->val)
            {
              temp=p2->val;
              p2->val=p3->val;
              p3->val=temp;
            }
            p3=p3->next;
        }
        p2=p2->next;
    }
    return list1;
}