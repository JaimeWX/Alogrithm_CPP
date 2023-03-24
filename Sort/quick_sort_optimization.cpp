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

/*
    三个候选元素的中位数作为基准数
*/
int optimize_pivot(vector<int>& nums, int left, int mid, int right)
{
    if((nums[left] < nums[mid]) ^ (nums[left] < nums[right]))
        return left;
    else if((nums[mid] < nums[left]) ^ (nums[mid] < nums[right]))
        return mid;
    else
        return right;
}

int partition(vector<int>& nums, int left, int right)
{   
    int median = optimize_pivot(nums, left, (left+right)/2, right);
    swap(nums,left,median);

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
    while(left<right)
    {
        int pivot = partition(nums,left,right);
        if(pivot-left < right-pivot)
        {
            quickSort(nums,left,pivot-1);
            left = pivot + 1;
        }
        else
        {
            quickSort(nums,pivot+1,right);
            right = pivot - 1;
        }
    }
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