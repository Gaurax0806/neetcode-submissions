class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(high >= low){
            while(true){
                if(low < nums.size()-1 && nums[low] == nums[low+1]){
                    low ++;
                }
                else {
                    break;
                }
            }
            while(true){
                if(high >= 1 && nums[high] == nums[high - 1]){
                    high --;
                }
                else {
                    break;
                }
            }
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return true;
            }
            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};