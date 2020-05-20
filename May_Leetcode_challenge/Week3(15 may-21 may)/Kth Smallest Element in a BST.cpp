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
    int ans;
    void smallestUtil(TreeNode* root,int &k){
        if(root==NULL)
            return ;
        smallestUtil(root->left,k);
        k--;
        if(k==0)
        ans=root->val;
        smallestUtil(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        smallestUtil(root,k);
        return ans;
    }
};
