/*
Problem Desciption:
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 */


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };15050580013
 */

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *pHead = new ListNode(0);
    ListNode *cur= pHead;
        if(l1==NULL)return l2;
    else if(l2==NULL) return l1;
    while(l1!=NULL&&l2!=NULL)
    {
        if(l1->val < l2->val )
        {
            cur->next = l1;
            l1 = l1->next;
            cur = cur->next;
        }
        else
        {
            cur->next = l2;
            l2 = l2->next;
            cur = cur->next;
        }
    }
    if(l1==NULL)
        cur->next=l2;
    if(l2==NULL)
        cur->next=l1;
    return pHead->next;
    }
};