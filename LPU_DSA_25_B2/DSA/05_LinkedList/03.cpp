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

// https://leetcode.com/problems/middle-of-the-linked-list/
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next!= NULL){
//             slow = slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
// };



// https://leetcode.com/problems/reverse-linked-list/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NNULL;
//         ListNode* curr = head;
        
//         while(curr!=NULL){
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;

//     }
// };



// https://leetcode.com/problems/reverse-nodes-in-k-group/

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
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {

//         if(head == NULL) return NULL:

//         ListNode* temp = head;
//         int count = 0;
//         while(temp!= NULL && count < k){
//             temp = temp->next;
//             count++;
//         }
//         if(count < k) return head;

//         count = 0;

//         // int count = 0;
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* next = NULL;

//         while(curr!=NULL && count < k){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             count++;
//         }

//         head->next = reverseKGroup(next,k);

//         return prev;

//     }
// };












