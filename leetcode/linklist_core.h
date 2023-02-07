#ifndef LLC00_H_
#define LLC00_H_
#include<iostream>
#include<vector>
using namespace std;

struct ListNode 
{
	double val;
	struct ListNode *next;
    /*
    通过该声明，即可使用以下两种不同的方式创建一个结点：
        通过仅指定其 value 部分，而后继指针则默认为 nullptr。
        通过指定 value 部分和一个指向链表下一个结点的指针。
    当需要创建一个结点放在链表的末尾时，第一种方法是很有用的；而当新创建的结点将被插入链表中间某个有后继结点的地方时，第二种方法是很有用的。
    */
    ListNode(double val1, ListNode *next1 = nullptr)
    {
        val = val1;
        next = next1;
    }
};

ListNode* create_LinkList(vector<int> nums);
void travers_LinkList(ListNode* head);
void travers_Vector(const vector<int>& nums);


#endif
