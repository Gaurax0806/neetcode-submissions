class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int mini = 6000;
        while(low <= high){
            if(nums[low] < nums[high]){
                mini = min(mini, nums[low]);
                return mini;
            }
            int mid = low + (high - low)/2;
            if(nums[low] <= nums[mid]){
                mini = min(mini, nums[low]);
                low = mid + 1;
            }
            else { 
                mini = min(nums[mid], mini);
                high = mid - 1;
            }
        }
        return mini;
    }
};
