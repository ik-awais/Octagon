#include<iostream>
#include<vector>
using namespace std;

// Solution Class
class Solution {
public:
    void sortColors(vector<int>& nums) {
        size_t l=0,m=0,h=nums.size()-1;
        while(m<=h)
            if(nums[m]==0)      swap(nums[m++],nums[l++]);
            else if(nums[m]==1) m++;
            else                swap(nums[m],nums[h--]);
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