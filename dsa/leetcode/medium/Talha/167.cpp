#include<iostream>
#include<vector>
using namespace std;

// Go To Leetcode, Go to problems tab, then search "Two Sum II"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        // Your Code Here  if (target >= -1000 && target <= 1000) {
            int temp, left, right;
            left = 0;
            right = nums.size()-1;
            for (int i = 0; i < nums.size(); i++) {
                temp = nums[left] + nums[right];
                if (temp == target)
                    return {left + 1, right + 1};
                else {
                    if (temp > target)
                        right = right - 1;
                    else
                        left = left + 1;
                }
            }
        
    return {};
}
    
};

// Main Function
// (Dont Change Anything in main)
// (You can change the testCase values and target value for testing)
int main() {
    Solution s;
    vector<int> testCase={2,7,11,15};
    int target=9;

    vector<int> answer=s.twoSum(testCase,target);

    for(int i=0;i<answer.size();i++)
        cout<<answer[i]<<" ";
    return 0;
}