/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* RecBST(vector<int> &preorder,int &idx,int min,int max,int val,int n){
        if(idx>=n)
            return NULL;
        TreeNode* root=NULL;
        if(val>min && val<max){
            root=new TreeNode(val);
            idx+=1;
            if(idx<n){
                root->left=RecBST(preorder,idx,min,val,preorder[idx],n);
                if(idx<n)
                root->right=RecBST(preorder,idx,val,max,preorder[idx],n);
            }
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=preorder.size();
        int idx=0;
        TreeNode *root=RecBST(preorder,idx,INT_MIN,INT_MAX,preorder[0],n);
        return root;
    }
};
