class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        unordered_map<Node* , Node*> mp;
        Node* temp = head;

// copies all values of nodes

        while(temp != NULL){
            mp[temp] = new Node(temp->val);
            temp = temp->next;
        }
// connecting nodes with ptrs
        temp = head;
        while(temp != NULL){
            mp[temp]->next = mp[temp->next];
            mp[temp]->random = mp[temp->random];

            temp = temp->next;
        }
        return mp[head];
    }
};