/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
            ListNode* first=headA;
            ListNode* second=headB;
            
            
            while(first&&second)
            {
                    if(first==second)
                            return first;
                first=first->next;
                    second=second->next;
            }
            if(first)
            {
                second=headA;
                    while(first)
                    {
                        first=first->next;
                            second=second->next;
                    }
                    first=headB;
                    while(first!=second)
                    {
                        first=first->next;
                        second=second->next;
                    }
                    
                    return first;
            }
            else if(second)
            {
                  first=headB;
                    while(second)
                    {
                        first=first->next;
                            second=second->next;
                    }
                    second=headA;
                    while(first!=second)
                    {
                        first=first->next;
                        second=second->next;
                    }
                    
                    return first;
            }
            return first;
    }
};