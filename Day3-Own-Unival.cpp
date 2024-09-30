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

    bool uniValued(TreeNode* root , int value){
        //Base case..

        if(root == NULL){
            return true;
        }

        if(root->val != value){
            return false;
        }

        return uniValued(root->left , value) && uniValued(root->right , value);
    }
    bool isUnivalTree(TreeNode* root) {
        //Base Case..

        if(root == NULL){
            return true; //Empty tree is always univalued..
        }

        return uniValued(root , root->val);
    }
};
