#include<stdlib.h>
#include<vector>
#include<stack>
#include"linklist_core.h"
using namespace std;


class Solution 
{
    public:
        vector<int> reversePrint(ListNode* head) 
        {
            stack<int> nodes;
            vector<int> result;
            ListNode* node = head;
            //顺序遍历链表，将链表中的元素压入栈中
            while(node != nullptr)
            {
                nodes.push(node->val);
                node = node->next;
            }
            //依次弹出栈顶元素，达到反向打印链表的目的
            while (!nodes.empty())
            {
                result.push_back(nodes.top());
                nodes.pop();
            }
            return result;

        }
};

int main()
{
    vector<int> nums = {1,3,2};
    ListNode *head = nullptr;
    head = create_LinkList(nums);
    travers_LinkList(head);

    Solution s1;
    s1.reversePrint(head);
}
