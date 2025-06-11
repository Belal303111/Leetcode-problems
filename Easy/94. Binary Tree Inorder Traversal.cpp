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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>n;
        if(root==NULL) return n;
       else
         {
            vector<int>left=inorderTraversal(root->left);
            n.insert(n.end(),left.begin(),left.end()); //Merge the vectors
        n.push_back(root->val);
            vector<int>right=inorderTraversal(root->right);
            n.insert(n.end(),right.begin(),right.end()); //Merge the vectors
         }
         return n;
    }
};