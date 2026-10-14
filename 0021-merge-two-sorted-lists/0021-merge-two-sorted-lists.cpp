class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        vector<int> result;
        ListNode* temp1 = list1;
        while(temp1 != NULL){
            result.push_back(temp1->val);
            temp1 = temp1->next;
        }
        ListNode* temp2 = list2;
        while(temp2 != NULL){
            result.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(result.begin() , result.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        for(int x : result){
            current->next = new ListNode(x);
            current = current->next;
        }
        return dummy->next;
    }
};