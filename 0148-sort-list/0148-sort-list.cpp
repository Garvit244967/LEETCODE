class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        sort(ans.begin() , ans.end());
        ListNode* result = new ListNode(0);
        ListNode* temp1 = result;
        for(int x : ans){
            temp1->next = new ListNode(x);
            temp1 = temp1->next;
        }
        return result->next;
    }
};