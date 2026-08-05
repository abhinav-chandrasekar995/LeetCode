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
    ListNode* rotateRight(ListNode* head, int k) {
        int length=0;
        if(head==NULL) return 0;
        ListNode* mover=head;
        while (mover!=NULL){
            length++;
            mover=mover->next;
        }
        k=k%length;
        if(k==0) return head;
        int steps=length-k;
        mover=head;
        while(mover->next!=NULL){
            mover=mover->next;
        }
        mover->next=head;
        mover=head;
        while(steps-1>0){
            mover=mover->next;
            steps--;
        }
        head=mover->next;
        mover->next=NULL;
        return head;
    }
};