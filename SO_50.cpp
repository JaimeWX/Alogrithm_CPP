/*
{2,3,1,0,2,5,3}
{1,3,2,0,2,5,3}
{3,1,2,0,2,5,3}
{0,1,2,3,2,5,3}
nums[2] == 2 <-> nums[4] == 2
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
    public:
        int findRepeatNumber(vector<int>& nums) 
        {  
            int index = 0;
            while (index < nums.size())
            {
                if (nums[index] != index)
                {   
                    int another_index;
                    another_index = nums[index];
                    if (nums[index] == nums[another_index])
                    {
                        return nums[index];
                    }
                    int temp;
                    temp = nums[index];
                    nums[index] = nums[another_index];
                    nums[another_index] = temp;
                }
                else
                {
                    ++index; 
                }
            }
        }
};

int main()
{
    vector<int> nums {2,3,1,0,2,5,3};
    Solution s1;
    cout << s1.findRepeatNumber(nums) <<endl;
}