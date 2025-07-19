#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> solve;
        vector<vector<int>> Final_Sol;
        sort(nums.begin(),nums.end());
        int i = 0  ;
        int j = nums.size()-1;
        int k= nums.size()-2;
        while(i<j&&i<k)
        {
            if(nums[i]+nums[j]+nums[k]==0)
            {
                solve.push_back(nums[i]+nums[j]+nums[k]);
                Final_Sol.push_back(solve);
            }
            else if (nums[i]+nums[j]+nums[k]>0)
            {
            }
            

        }
    }
};
