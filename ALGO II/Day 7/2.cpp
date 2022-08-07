class Solution {
public:

bool issame(TreeNode* root, TreeNode* subRoot)
{
    if(root==NULL || subRoot==NULL)
        return root==subRoot;
    return ((root->val == subRoot->val) && issame(root->left,subRoot->left) && issame(root->right,subRoot->right));
}
