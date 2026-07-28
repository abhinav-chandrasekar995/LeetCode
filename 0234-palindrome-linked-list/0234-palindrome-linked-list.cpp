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
    bool isPalindrome(ListNode* head) {
        vector<int>stack;
        if(head==NULL || head->next==NULL) return true;
        ListNode* mover=head;
        while(mover!=NULL){
            stack.emplace_back(mover->val);
            mover=mover->next;
        }
        int counter=stack.size()-1;
        mover=head;
        while(mover!=NULL && counter>=0){
            if(mover->val != stack[counter]) return false;
            mover=mover->next;
            counter--;
        }
        return true;
    }
};