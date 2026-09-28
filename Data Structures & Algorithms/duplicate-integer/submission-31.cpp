#include <iostream>
using namespace std;

class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> chest;
        int x = 0;
        while (x < nums.size()) {
            if (chest.insert(nums[x]).second == false ) {
                return true; 
            }
            x++;
        }
        return false;
    }
};