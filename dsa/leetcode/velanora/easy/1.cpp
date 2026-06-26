#include<iostream>
#include<vector>
#include<utility>
using namespace std;

// Go To Leetcode, Go to problems tab, then search "Two Sum"

// Solution Class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        // Your Code Here
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

    for(int i=0:i<answer.size();i++)
        cout<<answer[i]<<" ";
    return 0;
}