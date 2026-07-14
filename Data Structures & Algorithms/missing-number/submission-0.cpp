class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums[nums.size()-1] != nums.size()){
            return nums[nums.size()-1]+1;
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i-1] != 1) {
                return (nums[i]-1);
            }
        }
        return 0;
    }


};