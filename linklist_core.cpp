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

//根据列表的存储顺序创建一个链表
ListNode* create_LinkList(vector<int> nums)
{
    ListNode *head = nullptr;
    int nums_tail = nums.size() - 1;
    while(nums_tail >= 0)
    {
        head = new ListNode(nums[nums_tail],head);
        nums_tail--;
    }
    return head;
}

void travers_LinkList(ListNode* head)
{
    ListNode *ptr = head;
    while(ptr!=nullptr)
    {
        cout << ptr->val << endl;
        ptr = ptr -> next;
    }

}

int main()
{   

    //可用于Debug LeetCode
    vector<int> nums = {1,3,2};
    ListNode *head = nullptr;
    head = create_LinkList(nums);
    travers_LinkList(head);

    /*
    //小学生方法
     ListNode *head = nullptr;
    head = new ListNode;
    head->val = 12.5;
    head->next = nullptr;
    cout << head->val << endl;

    ListNode *sec = new ListNode;
    sec -> val = 13.5;
    sec -> next = nullptr;
    head -> next = sec;
    cout << head -> next -> val<< endl;
    */

   /*
   //初中生方法
   ListNode *sec = new ListNode(13.5);
   ListNode *head = new ListNode(12.5,sec);
   cout << head->val << endl;
   cout << head -> next -> val<< endl;
   */

  /*
  //高中生方法
    ListNode *head = new ListNode(13.5);
    head = new ListNode(12.5,head);
    cout << head->val << endl;
    cout << head -> next -> val<< endl;
 */
}