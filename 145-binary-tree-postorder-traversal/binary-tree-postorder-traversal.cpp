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
void postorder(TreeNode*p,vector<int>&arr)
{
    if(p==NULL)
    {
        return;
    }
    postorder(p->left,arr);
    postorder(p->right,arr);
    arr.push_back(p->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>finalAns;
        postorder(root,finalAns);
        return finalAns;
    }
};


