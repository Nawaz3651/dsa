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
        ListNode *temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        if(count==n){
            ListNode *dl = head;
            head = head->next;
            delete dl;
            return head;
        }
        int p = count-n;
        ListNode *curr = head;
        for(int i = 1;i<p;i++){
            curr = curr->next;
        }
        ListNode *todelete = curr->next;
        curr->next = todelete->next;
        delete todelete;

        return head;
    }
};