/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* f(ListNode* head, int k,int z) {
            
            if(!head)
                    return NULL;
            if(!z)
            {
                    return head;
            }
            
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* nxt=head;
            int flag=1;
            for(int i=0;i<k;i++) {
                    
                    nxt=curr->next;
                    curr->next=prev;
                    prev=curr;
                    curr=nxt;
                    if(!curr)
                    {
                            flag=0;
                         break;   
                    } 
                
        }
           
            
            if(head)
            head->next=f(curr,k,z-1);
            return prev;
            
            }
    
        
    ListNode* reverseKGroup(ListNode* head, int k) {
 
   int cnt=0;
            ListNode* temp=head;
            while(temp)
            {
                cnt++;
                    temp=temp->next;
            }
            int z=cnt/k;
            
         return   f(head,k,z);
            
            
    }
};