//
// Created by sohai on 1/14/2025.
//

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insert(ListNode* &head,int value)
 {
    ListNode* nouveau = new ListNode(value);
   if(head == nullptr)
      head = nouveau ;
   else
    {
      nouveau->next = head;
      head = nouveau;
    }
 }



class Solution {
public:
    ListNode* reverseList(ListNode* head);
    ListNode* reverseList2(ListNode* head); // Recursion
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};


#endif //SOLUTION_H
