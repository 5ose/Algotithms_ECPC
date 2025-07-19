#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int h = min(height[i], height[j]);
                int w = j - i;
                maxWater = max(maxWater, h * w);
            }
        }
        return maxWater; 
    }
};
