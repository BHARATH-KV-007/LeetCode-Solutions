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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        ListNode*p=NULL;
        ListNode*c=head;
        while(c!=NULL)
        {
            if(c->val==val)
            p->next=c->next;
            else
            {
                p=c;
            }
            c=c->next;
            
        }
        
        return head;
    }
};