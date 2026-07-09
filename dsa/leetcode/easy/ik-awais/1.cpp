#include<iostream>
#include<vector>
using namespace std;

// Go To Leetcode, Go to problems tab, then search "Two Sum"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        vector <int> adders;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if (i == j) {continue;}
                if(nums[i]+nums[j] == target)
                {
                    adders.push_back(i);
                    adders.push_back(j);
                    return adders; 
                }
            }
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
    int target=13;

    vector<int> answer=s.twoSum(testCase,target);

    for(int i=0;i<answer.size();i++)
        cout<<answer[i]<<" ";
    return 0;
}