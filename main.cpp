#include "Solution.cpp"

int main()
{
    ListNode* head = nullptr;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    Solution s;
    head = s.reverseList2( head);

    return 0;
}
