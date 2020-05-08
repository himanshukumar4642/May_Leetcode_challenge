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
    bool isSibling(TreeNode* root,int x,int y){
        if(root==NULL)
            return 0;
        return ((root->left!=NULL && root->right!=NULL && root->left->val==x && root->right->val==y)||(root->left!=NULL && root->right!=NULL && root->right->val==x && root->left->val==y)||                      (isSibling(root->left,x,y))||(isSibling(root->right,x,y)));
    }
    int level(TreeNode* root,int x,int lev){
        if(root==NULL)
            return 0;
        if(root->val==x)
            return lev;
        int l=level(root->left,x,lev+1);
        if(l!=0)
            return l;
        return level(root->right,x,lev+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(root==NULL)
            return 0;
        if((level(root,x,1)==level(root,y,1))&&!(isSibling(root,x,y)))
            return 1;
        else
            return 0;
    }
};
