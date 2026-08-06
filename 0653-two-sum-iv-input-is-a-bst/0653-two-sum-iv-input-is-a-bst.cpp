class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        inorderTraversal(root , inorder);
        int left = 0;
        int right = inorder.size() - 1;
        while(left < right){
            int sum = inorder[left] + inorder[right];
            if(sum == k) return true;
            if(sum < k) left++;
            else right--;
        }
        return false;
    }
    void inorderTraversal(TreeNode* root , vector<int>& inorder){
        if(root == NULL) return;
        inorderTraversal(root->left , inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right , inorder);
    }
};