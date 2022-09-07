// Problem : Two Add Numbers
// URL : https://leetcode.com/problems/add-two-numbers/

/* 
Description:

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
 */

class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {        
        ListNode* zeroth_node = new ListNode(0);
        ListNode* last_node = zeroth_node;
        bool carry_over = false;
        
        while (l1 || l2) {
            int digit_sum = (int) carry_over;
            carry_over = false;
            
            if (l1) {
                digit_sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2) { 
                digit_sum += l2->val;
                l2 = l2->next;
            }
            
            if (digit_sum > 9) {
                carry_over = true;
                digit_sum -= 10;
            }
            
            ListNode* new_node = new ListNode(digit_sum);
            
            last_node->next = new_node;
            last_node = new_node;
        }
        
        if (carry_over) last_node->next = new ListNode(1);
        
        return zeroth_node->next;
    }
};