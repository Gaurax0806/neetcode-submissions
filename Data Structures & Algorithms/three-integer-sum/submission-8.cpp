class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector <int>> result;
        for (int i = 0; i < (int)nums.size()-2; i++) {
            if (i > 0 && nums[i-1] == nums[i]){
                continue;
            }
            int left = i+1;
            int right = nums.size()-1;
            int target = -1 * nums[i];
            int sum = 0;
            while (left<right) {
                sum = nums[left] + nums[right];
                if (sum > target) {
                    right --;
                } else if (sum < target) {
                    left ++;
                } else if (sum == target) {
                    result.push_back({nums[left], nums[right], nums[i]});
                    while (left < right && nums[left] == nums[left+1]) left++;
                    while (left < right && nums[right] == nums[right-1]) right--;
                    left ++;
                    right --;
                }
            }
        }
        return result;
    }
};
