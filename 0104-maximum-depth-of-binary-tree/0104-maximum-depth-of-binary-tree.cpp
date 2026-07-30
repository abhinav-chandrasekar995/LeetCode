/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int ans=-1e9;
int runningDepth=1;
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        traverse(root,ans);
        return ans;
    }
    void traverse(TreeNode* root,int &ans){
        if(root==NULL && runningDepth>=1) return;
        ans=max(ans,runningDepth);
        if(root->left!=NULL){
            runningDepth++;
            traverse(root->left,ans);
            runningDepth--;
        }
         if(root->right!=NULL){
            runningDepth++;
            traverse(root->right,ans);
            runningDepth--;
        }
    }
};