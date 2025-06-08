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
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if(p ==NULL && q==NULL) return true; //the trees is the same
     if(p==NULL || q==NULL) return false; //the trees is not the same
     if(p->val !=q->val) return false;   //check if the values are not the same
     return isSameTree(p->left,q->left) && isSameTree(p->right,q->right); //recusufe the left and right of the trees
    }
};