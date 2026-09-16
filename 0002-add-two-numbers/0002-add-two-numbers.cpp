class Solution {
public:
    string addStrings(string s1 , string s2){
         int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;

        string ans = "";
        while(i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if(i >= 0) {
                sum += s1[i] - '0';
                i--;
            }
            if(j >= 0) {
                sum += s2[j] - '0';
                j--;
            }
            ans += char((sum % 10) + '0');
            carry = sum / 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1 = "";
        string s2 = "";

        ListNode* temp1 = l1;
        while(temp1 != NULL){
            s1 += to_string(temp1->val);
            temp1 = temp1->next;
        }
        ListNode* temp2 = l2;
        while(temp2 != NULL){
            s2 += to_string(temp2->val);
            temp2 = temp2->next;
        }
        reverse(s1.begin() , s1.end());
        reverse(s2.begin() , s2.end());

        string sum = addStrings(s1,s2);
        reverse(sum.begin() , sum.end());

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for(char ch : sum){
            temp->next = new ListNode(ch - '0');
            temp = temp->next;
        }
        return dummy->next;
    }
};