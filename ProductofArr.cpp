#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    product *= nums[j];
                }
            }
            results.push_back(product);
        }

        return results;
    }
};
