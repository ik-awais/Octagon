#include<iostream>
#include<vector>
using namespace std;

// Solution Class
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Your Code Here
        int mid = 0;
        int low = 0;
        int high = nums.size() -1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            }else if(nums[mid] == 1)
            {
                mid++;
            }else if(nums[mid] == 2)
            {
                int swap = nums[mid];
                nums[mid] = nums[high];
                nums[high] = swap;
                high--;
            }
        }
    }
};

// Main Function
// (Dont Change Anything in main)
// (You can change the nums values for testing)
int main() {
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};

    s.sortColors(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
        
    return 0;
}