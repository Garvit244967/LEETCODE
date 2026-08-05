class BSTIterator {
private:
    stack<TreeNode*> mystack;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* tempNode = mystack.top();
        mystack.pop();
        pushAll(tempNode->right);
        return tempNode->val;
    }
    
    bool hasNext() {
        return !mystack.empty();
    }
private:
    void pushAll(TreeNode* Node){
        for(; Node != NULL; mystack.push(Node) , Node = Node->left);
    }
};