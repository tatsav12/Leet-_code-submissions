/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }

        unordered_map<Node*,Node*> m;

        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* NewTemp = newHead;
        m[head]= newHead;

        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            NewTemp->next = copyNode;

            oldTemp=oldTemp->next;
            NewTemp= NewTemp->next;

        }
        oldTemp = head;
        NewTemp = newHead;

        while(oldTemp != NULL){
            NewTemp->random = m[oldTemp->random];

            oldTemp=oldTemp->next;
            NewTemp= NewTemp->next;

        }

        return newHead;

    }
};
