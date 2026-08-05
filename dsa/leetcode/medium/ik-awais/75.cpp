#include<iostream>
#include<vector>
using namespace std;

// Solution Class
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size()-1, temp;
        while(j<=k)
        {
            if(nums[j]==0)
            {
                temp = nums[j];
                nums[j]=nums[i];
                nums[i++]=temp;
                j++;
            }
            else if(nums[j]==1) {j++;}
            else if(nums[j]==2)
            {
                temp=nums[j];
                nums[j]=nums[k];
                nums[k--]=temp;
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