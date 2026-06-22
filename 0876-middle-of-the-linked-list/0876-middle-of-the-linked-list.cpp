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
    ListNode* middleNode(ListNode* head) {
        int count=1;
        struct ListNode* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int middle=ceil(count/2);
        temp=head;
        count=1;
        while(count<=middle)
        {
            temp=temp->next;
            count++;
        }
        return temp;
    }
};