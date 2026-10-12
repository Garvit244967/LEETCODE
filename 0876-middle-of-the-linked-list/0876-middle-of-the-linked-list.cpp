class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        int mid;
        if(count % 2 == 0){
            mid = count / 2 + 1;
        }
        else{
            mid = count / 2 + 1;
        }
        temp = head;

        for(int i = 1; i < mid; i++){
            temp = temp->next;
        }
        return temp;
    }
};