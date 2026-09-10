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
pair<int,int> find(TreeNode* root){
    if(root==NULL) return {0,0};
    pair<int,int>left=find(root->left);
    pair<int,int>right=find(root->right);
    int sum=root->val+left.first+right.first;
    int cnt=1+left.second+right.second;

    return {sum,cnt};

}
    int averageOfSubtree(TreeNode* root) {
    if(root==NULL) return 0;
    int cnt=0;
    pair<int,int>p=find(root);
    int sum=p.first;
    int nodes=p.second;
    if(root->val==sum/nodes) cnt++;
    cnt+=averageOfSubtree(root->left);
    cnt+=averageOfSubtree(root->right);
    return cnt;

        
    }
};