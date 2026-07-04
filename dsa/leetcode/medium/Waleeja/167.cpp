#include<iostream>
#include<vector>
using namespace std;

// Go To Leetcode, Go to problems tab, then search "Two Sum II"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        // Your Code Here
         int start = 0;
       int end = nums.size()-1;
       while(start<end){
        int sum = nums[start]+nums[end];
        if(sum == target){
            return {start+1, end+1};
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
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