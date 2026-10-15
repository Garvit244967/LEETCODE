class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        for(int i = ans.size()-1; i >= 0; i--){
            current->next = new ListNode(ans[i]);
            current = current->next;
        }
        return dummy->next;
    }
};