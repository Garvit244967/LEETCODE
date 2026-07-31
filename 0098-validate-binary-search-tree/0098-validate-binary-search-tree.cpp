class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root , LONG_MIN , LONG_MAX);
    }
private:
    bool validate(TreeNode* root , long minval , long maxval){
        if(root == NULL){
            return true;
        }
        if(root->val <= minval || root->val >= maxval){
            return false;
        }
        return validate(root->left , minval , root->val)&&
               validate(root->right , root->val , maxval);
    }
};