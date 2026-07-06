#include<iostream>
#include<vector>
using namespace std;

// Go To Leetcode, Go to problems tab, then search "Two Sum II"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        int m = 0;
        int n = (nums.size() - 1);
        int sum = 0;
        
        while ( n>m )
        {
            sum = nums[m] + nums[n];
            if (sum == target)
                return {m+1, n+1};
            else if (sum > target)
                n--;
            else
                m++;
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