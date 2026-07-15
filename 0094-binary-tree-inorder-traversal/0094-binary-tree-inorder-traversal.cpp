class Solution {
    private:
    void recursiveInorder(TreeNode* root , vector<int>& nums){
        if(root == NULL) return;
        recursiveInorder(root->left , nums);
        nums.push_back(root->val);
        recursiveInorder(root->right , nums);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        recursiveInorder(root , nums);
        return nums;
    }
};