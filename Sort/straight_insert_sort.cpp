#include <vector>
#include <stdio.h>
using namespace std;

/* 插入排序 */
void straightInsertSort(vector<int>& nums) {
    // 外循环：base = nums[1], nums[2], ..., nums[n-1]
    for (int i = 1; i < nums.size(); i++) 
    {
        int base = nums[i], j = i - 1;
        // 内循环：将 base 插入到左边的正确位置
        while (j >= 0 && nums[j] > base) 
        {
            nums[j + 1] = nums[j];  // 1. 将 nums[j] 向右移动一位
            j--;
        }
        nums[j + 1] = base;         // 2. 将 base 赋值到正确位置
    }
}

void print_nums(vector<int> nums)
{
    int i;
    for (i=0;i<nums.size();i++)
    {
        printf("%d\t",nums[i]);
    }
    printf("\n");
}


int main()
{
    vector<int> nums = {9,1,5,8,3,7,4,6,2};
    straightInsertSort(nums);
    print_nums(nums);
}