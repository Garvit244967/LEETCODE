class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> result;
        ListNode* temp = head;
        while(temp != NULL){
            result.push_back(temp->val);
            temp = temp->next;
        }
        sort(result.begin() , result.end());

        temp = head;
        int i = 0;
        while(temp != NULL){
            temp->val = result[i++];
            temp = temp->next;
        }
        return head;
    }
};