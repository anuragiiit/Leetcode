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
    ListNode* rotateRight(ListNode* head, int k) {
            if(!head||k==0)
                    return head;
            ListNode* first=head;
            ListNode* second=head;
            ListNode* temp=head;
            int c=0;
            while(temp)
            {
                c++;
                    temp=temp->next;
            }
            
          k%=c;
            if(k==0)
                    return head;
            
            for(int i=0;i<k;i++)
            {
                    second=second->next;
            }
            cout<<second->val;
            ListNode* prev=second;
            while(second->next)
            {
                     prev=second;
                    first=first->next;
                    second=second->next;
                   
            }
            ListNode* res=first->next;
            first->next=NULL;
            cout<<prev->val;
            
              second->next=head;
            return res;
    
    }
};