class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        if(n == 0) return 0;

        k = k % n;
        vector<int> result;
        for(int i = n-k; i < n; i++){
            result.push_back(ans[i]);
        }
        for(int i = 0; i < n-k; i++){
            result.push_back(ans[i]);
        }
        ListNode* final = new ListNode(0);
        ListNode* current = final;
        for(int x : result){
            current->next = new ListNode(x);
            current = current->next;
        }
        return final->next;
    }
};