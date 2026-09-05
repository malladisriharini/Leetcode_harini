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
int solve(TreeNode* root,string path){
    if(root==NULL) return ans;
    path+=to_string(root->val);
    if(root->left==NULL && root->right==NULL){
        ans+=(stoi(path,nullptr,2));
    }
    solve(root->left,path);
    solve(root->right,path);
    return ans;
}
    int sumRootToLeaf(TreeNode* root) {
        ans=0;
        solve(root,"");
        return ans;
    }
};