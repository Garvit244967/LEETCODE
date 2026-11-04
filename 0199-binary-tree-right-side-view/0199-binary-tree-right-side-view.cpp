class Solution {
public:
    void rightDFS(TreeNode* root , int level , vector<int>& result){
        if(root == NULL) return;
        if(result.size() == level){
            result.push_back(root->val);
        }
        rightDFS(root->right , level + 1 , result);
        rightDFS(root->left , level + 1 , result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        rightDFS(root , 0 , result);
        return result;
    }
};