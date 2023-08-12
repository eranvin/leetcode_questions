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
    bool isValidBST(TreeNode* root) {

        if(!root)
            return true;
        return temp(root->left,root->val,root->val,0,1) & temp(root->right,root->val,root->val,1,0);

        
    }

    bool temp(TreeNode* root,int min_val, int max_val,int b_min,int b_max){
        
        if(!root)
            return true;

        int new_min, new_max;
        
        
        if(b_min)
            if(!(root->val > min_val))
                return false;
        if(b_max)
            if(!(root->val < max_val))
                return false;
        

        bool b_left = true;
        if(root->left){
             if(b_max)
                new_max = std::min(max_val,root->val);
            else
                new_max = root->val;
             b_left = temp(root->left,min_val,new_max,b_min,1);
        }
           
        
        bool b_right = true;
        if(root->right){
            if(b_min)
                new_min = std::max(min_val,root->val);
            else
                new_min = root->val;
            b_right =temp(root->right,new_min,max_val,1,b_max);
        }

        
        return b_left&b_right;

    }
};
