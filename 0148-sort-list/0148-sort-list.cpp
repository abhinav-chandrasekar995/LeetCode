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
    ListNode* sortList(ListNode* head) {
        vector<int>val;
        ListNode* mover=head;
        while(mover!=NULL){
            val.emplace_back(mover->val);
            mover=mover->next;
        }
        sort(val.begin(),val.end());
        int i=0;
        mover=head;
        while(mover!=NULL){
            mover->val=val[i];
            mover=mover->next;
            i++;
        }
        return head;
    }
};