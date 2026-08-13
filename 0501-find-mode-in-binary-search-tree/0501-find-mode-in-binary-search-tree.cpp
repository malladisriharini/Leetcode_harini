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
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        int maxi=0;
        unordered_map<int,int>f;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
 int s=q.size();
 for(int i=0;i<s;i++){
    TreeNode* node=q.front();
    q.pop();
    f[node->val]++;


    if(node->left) q.push(node->left);
    if(node->right) q.push(node->right);

 }
        }
 for(auto &it:f){
    maxi=max(maxi,it.second);
 }

 for(auto &i:f){
    if(i.second==maxi){
        ans.push_back(i.first);
    }
 }
        return ans;
    }
};