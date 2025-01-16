//
// Created by sohai on 1/14/2025.
//

#include "Solution.h"
ListNode* Solution::reverseList(ListNode* head)
{
    ListNode* currrentNode = head;
    ListNode* previous = nullptr;
    ListNode* restofList = head->next;
    while (restofList != nullptr) {
        currrentNode->next = previous;
        previous = currrentNode;
        currrentNode = restofList;
        restofList = restofList->next;
    }
    currrentNode->next = previous;
    return currrentNode;

}
ListNode* Solution::reverseList2(ListNode* head) {
    if (!head) {
        return nullptr;
    }

    ListNode* newHead = head;
    if (head->next) {
        newHead = reverseList2(head->next);
        head->next->next = head;
    }
    head->next = nullptr;

    return newHead;
}
ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {

}