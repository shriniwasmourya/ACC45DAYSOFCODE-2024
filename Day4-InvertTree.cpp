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
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> s;

        if(root == NULL){
            return NULL;
        }

        s.push(root);

        while(!s.empty()){
            TreeNode* curr = s.top();
            s.pop();

            if(curr != NULL){
                s.push(curr->left);
                s.push(curr->right);

                swap(curr->left , curr->right);
            }
        }

        return root;
    }
};
