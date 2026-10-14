class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string result = "";
        ListNode* temp = head;
        while(temp != NULL){
            result += to_string(temp->val);
            temp = temp->next;
        }
        string original = result;
        reverse(result.begin() , result.end());
        return result == original;
    }
};