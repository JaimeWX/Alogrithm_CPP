#include <vector>
#include <stdio.h>
using namespace std;

void printNums(vector<int> nums)
{
    int i;
    for(i=0;i<nums.size();i++)
        printf("%d ",nums[i]);
        printf("\n");
}

void swap(vector<int>& nums, int i, int j)
{
    int tmp = nums[j];
    nums[j] = nums[i];
    nums[i] = tmp;
}

int partition(vector<int>& nums, int left, int right)
{
    int i = left, j = right;
    while(i < j)
    {
        while(i<j && nums[j] >= nums[left])
            j--;
        while(i<j && nums[i] <= nums[left])
            i++;
        swap(nums,i,j);
    }
    swap(nums,i,left);
    return i;
}

void quickSort(vector<int>& nums, int left, int right)
{
    if(left >= right)
        return;
    int pivot = partition(nums,left,right);
    quickSort(nums,left,pivot-1);
    quickSort(nums,pivot+1,right);
}

int main()
{
    vector<int> nums = {2,4,1,0,3,5};
    printf("排序前: ");
    printNums(nums);
    quickSort(nums,0,nums.size()-1);
    printf("排序后: ");
    printNums(nums);
}