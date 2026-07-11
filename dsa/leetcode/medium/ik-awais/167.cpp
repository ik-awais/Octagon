#include<iostream>
#include<vector>
using namespace std;
// Go To Leetcode, Go to problems tab, then search "Two Sum II"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        vector<int> adders;
        int i = 0, j = nums.size()-1;
        while (i < j)
        {
            int sum = nums[i]+nums[j];
            if(sum == target)
            {
                adders.push_back(i+1);
                adders.push_back(j+1);
                return adders;
            }
            if(sum < target) i++;
            else if (sum > target) j--;
        }
        return adders;
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