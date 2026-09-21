#include<iostream>
#include<vector>
using namespace std;

// Solution Class
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Your Code Here
           int low=0,mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0)      swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1) mid++;
            else                  swap(nums[mid],nums[high--]);
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