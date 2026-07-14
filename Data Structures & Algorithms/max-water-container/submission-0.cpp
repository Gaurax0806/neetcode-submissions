class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int max_volume = INT_MIN;
        int volume = 0;
        int right = height.size()-1;
        while (left < right) {
            volume = min(height[left], height[right]) * (right - left);
            max_volume = max(volume, max_volume);
            if (height[left] < height[right]) {
                left ++;
            }
            else if (height[left] >= height[right]) {
                right --;
            }
        }
        return max_volume;
    }
};