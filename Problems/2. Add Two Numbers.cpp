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
        ListNode* toReturn = new ListNode;
        ListNode* sum = toReturn;
        int firstVal = 0;
        int secondVal = 0;
        bool listEnded = 0;
        int remainder = 0;
        while (l1 || l2 || remainder) {
            firstVal = l1 ? l1->val : 0;
            secondVal = l2 ? l2->val : 0;
            sum->val = ((firstVal)+(secondVal)+remainder) % 10;
            remainder = (firstVal + secondVal + remainder) >= 10 ? (firstVal + secondVal + remainder) / 10 : 0;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
            if (l1 || l2 || remainder) {
                sum->next = new ListNode{};
                sum = sum->next;
            }
        }
        return toReturn;
    }
};