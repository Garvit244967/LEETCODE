class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int> ans;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        vector<int> result;
        k = k % n;
        if(k == 0) return head;
        for(int i = n-k; i < n; i++){
            result.push_back(ans[i]);
        }
        for(int i = 0; i < n-k; i++){
            result.push_back(ans[i]);
        }

        ListNode* newHead = new ListNode(result[0]);
        temp = newHead;
        for(int i = 1; i < n; i++){
            temp->next = new ListNode(result[i]);
            temp = temp->next;
        }
        return newHead;
    }
};