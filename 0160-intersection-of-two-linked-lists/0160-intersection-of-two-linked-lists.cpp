/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>umpp;
        if(headA==headB) return headA;
        while(headA!=NULL){
            umpp[headA]++;
            headA=headA->next;
        }
        ListNode *ans=headB;
        while(ans!=NULL){
            if(umpp.find(ans)!=umpp.end()) return ans;
            ans=ans->next;
        }
        return NULL;
    }
};