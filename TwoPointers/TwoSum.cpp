#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> solve;
    int i =0;
    int j=numbers.size()-1;
   while (i < j) {
            int value = numbers[i] + numbers[j];
            if (value > target) {
                j--;
            } else if (value < target) {
                i++;
            } else if (value == target) {
                solve.push_back(i + 1);
                solve.push_back(j + 1);
                return solve;
            }
        }

        return solve;
    

    }
};
