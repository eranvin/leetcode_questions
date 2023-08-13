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
    void flatten(TreeNode* root) {

        if(root == nullptr)
            return;
        if((root->right ==nullptr) && (root->left ==nullptr))
            return;
        
        if(root->left){
            flatten(root->left);
            TreeNode* right_tmp = root->right;
            root->right = root->left;
            root->left = nullptr;
            
            TreeNode* tmp = root->right;
            
            while(tmp->right)
                tmp = tmp->right;

            tmp->right = right_tmp;
        }
        flatten(root->right);
    }
};
