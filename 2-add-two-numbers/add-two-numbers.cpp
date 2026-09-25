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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;
        while(temp1!=nullptr && temp2!=nullptr){
            int sum = carry +  temp1->val + temp2->val;
            if(sum>=10){
                curr->next = new ListNode(sum%10);
                carry = sum/10;
            }
            else{
                curr->next = new ListNode(sum);
                carry = sum/10;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            curr = curr->next;
        }
        while(temp1!=nullptr){
            int sum = carry+temp1->val;
            if(sum>=10){
                curr->next = new ListNode(sum%10);
                carry = sum/10;
            }
            else{
                curr->next = new ListNode(sum);
                carry = sum/10;
            }
            temp1 = temp1->next;
            curr = curr->next;
        }
        while(temp2!=nullptr){
            int sum = carry+temp2->val;
            if(sum>=10){
                curr->next = new ListNode(sum%10);
                carry = sum/10;
            }
            else{
                curr->next = new ListNode(sum);
                carry = sum/10;
            }
            temp2 = temp2->next;
            curr = curr->next;
        }
        if(carry!=0){
            curr->next = new ListNode(carry);
        }
        
        return dummy->next;
        
    }
};