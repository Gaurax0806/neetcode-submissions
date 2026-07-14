class Solution {
public:
    int min_index(vector<int> & nums){
        int minn = INT_MAX;
        int index = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minn){
                minn = min(minn, nums[i]);
                index = i;
            }
        }
        return index;
    }

    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j = 0; j < k; j++){
            int pos = min_index(nums);
            nums[pos] *= multiplier; 
        }
        return nums;
    }
};