class Solution {
public:
    void rightDFS(TreeNode* node , int level , vector<int>& result){
        if(node == NULL) return;
        if(result.size() == level){
            result.push_back(node->val);
        }
        rightDFS(node->right , level + 1 , result);
        rightDFS(node->left , level + 1 , result);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        rightDFS(root , 0 , result);
        return result;
    }
};