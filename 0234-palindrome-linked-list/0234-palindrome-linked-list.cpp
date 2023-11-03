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
private:
    ListNode* getMid(ListNode* &head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* &head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;

        while (curr != NULL) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true; // Empty list or single node is considered a palindrome.
        }

        ListNode* middle = getMid(head);
        ListNode* temp = middle->next;
        middle->next = reverse(temp);

        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        while (head2 != nullptr) {
            if (head2->val != head1->val) {
                return false; // Not a palindrome.
            }

            head1 = head1->next;
            head2 = head2->next;
        }

        return true; // It's a palindrome.
    }
};





