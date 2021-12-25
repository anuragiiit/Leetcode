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
        map<Node*,Node*> mp;
            Node* res=new Node(0);
               Node* ans=res;
            Node* temp=head;
            
            while(temp)
            {
                Node* node=new Node(temp->val);
            res->next=node;
                    
                    res=res->next;
                    mp[temp]=node;
                temp=temp->next;
            }
        
            temp=head;
            res=ans->next;
            while(temp)
            {
                res->random=mp[temp->random];
                    res=res->next;
                    temp=temp->next;
            }
            return ans->next;
    }
};