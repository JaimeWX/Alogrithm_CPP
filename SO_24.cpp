#include "linklist_core.h"

class Solution {
    public:
        ListNode* reverseList(ListNode* head) 
        {
            return recur(head,nullptr);
        }
    private:
        ListNode* recur(ListNode* cur, ListNode* pre)
        {   
            if(cur==nullptr) return pre;
            ListNode* res = recur(cur->next,cur);
            cur->next = pre;
            return res;
        }
};

int main()
{
    vector<int> nums = {1,2,3,4,5};
    ListNode *head = nullptr;
    head = create_LinkList(nums);
    travers_LinkList(head);

    Solution s1;
    ListNode *tail = nullptr;
    tail = s1.reverseList(head);
    travers_LinkList(tail);
}