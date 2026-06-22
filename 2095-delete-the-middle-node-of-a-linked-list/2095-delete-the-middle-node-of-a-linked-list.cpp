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
    ListNode* deleteMiddle(ListNode* head) {
        struct ListNode* temp=head;
        int count=1;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count==1) return NULL;
        if (count==2)
        {
            temp=head;
            temp->next=NULL;
            return head;
        }
        int mid = count/2;
        temp=head;
        int count1=1;
        while(temp->next!=NULL)
        {
            if (count1==mid)
            {
            temp->next=temp->next->next;
            break;
            }
            temp=temp->next;
            count1++;
        }
        return head;
    }
};