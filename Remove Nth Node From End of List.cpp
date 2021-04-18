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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;
        ListNode* temp = new ListNode(0,head);
        int count=0;
        while(true){
            p=p->next;
            count++;
            if(p==nullptr){
                if(temp->next==head){
                    head=head->next;
                    break;
                    
                }else{
                    temp->next = (temp->next)->next;
                    break;
                }
            }
            if(count>=n)
                temp = temp->next;
                
        }
        return head;
    }
};
