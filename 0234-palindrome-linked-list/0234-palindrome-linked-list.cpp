class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string result = "";
        ListNode* temp = head;
        while(temp != NULL){
            result += to_string(temp->val);
            temp = temp->next;
        }
        int low = 0;
        int high = result.length() - 1;
        while(low <= high){
            if(result[low] != result[high]){
                return false;
            }

            low++;
            high--;
        }
        return true;
    }
};