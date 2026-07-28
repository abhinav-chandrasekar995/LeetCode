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
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* first=head;
        ListNode* head2=head->next;
        ListNode* second=head->next;
        while(second!=NULL && second->next!=NULL){
            first->next=second->next;
            second->next=second->next->next;
            first=first->next;
            second=second->next;
        }
        first->next=head2;
        return head;
    }
};