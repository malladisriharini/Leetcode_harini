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
int ans=0;
int find(TreeNode* root){
    if(root==NULL) return 0;
int ls=find(root->left);
int rs=find(root->right);
ans+=abs(ls-rs);
return root->val+ls+rs;

}
    int findTilt(TreeNode* root) {
        find(root);
        return ans;
    }
};