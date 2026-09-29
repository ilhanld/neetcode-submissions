class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> value;
        for( int i = 0; i < nums.size(); i++) {
            for (int y = 0; y < nums.size(); y++) {
                if (nums[i] + nums[y] == target && i != y) {
                    value.push_back(i);
                    value.push_back(y);
                    return value;
                }
            }
        }
    }
};
