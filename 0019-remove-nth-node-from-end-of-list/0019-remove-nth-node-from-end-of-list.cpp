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
    
    ListNode* reverse(ListNode* head){
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        
        while(curr != NULL){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        head = reverse(head);
        
        
        if(n ==1){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        else{
            ListNode* curr = head;
            ListNode* prev = NULL;
            int cnt = 1;
            
            while(cnt<n){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            delete curr;
        }
        
        return reverse(head);
    }
};