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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr)
            return nullptr;
        ListNode* lessX = new ListNode;
        ListNode* lessXStart=lessX;
        ListNode* greaterX = new ListNode;
        ListNode* greaterXStart=greaterX;
        while(head!=nullptr){
            if(head->val<x){
                lessX->next=head;
                lessX=lessX->next;
                head=head->next;
            }else{
                greaterX->next=head;
                greaterX=greaterX->next;
                head=head->next;
            }
        }
        greaterX->next=nullptr;
        lessX->next=greaterXStart->next;
        

        return lessXStart->next;
        
    }
};
