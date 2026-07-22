class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        int level = 0;
        bool leftToRight = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;

            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();

                temp.push_back(node->val);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(level % 2 == 1){
                reverse(temp.begin() , temp.end());
            }
            result.push_back(temp);
            level++;
        }
        return result;
    }
};