class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left_highest(height.size());
        left_highest[0] = height[0];
        for (int i = 1; i < height.size(); i++)
        {
            left_highest[i] = max(height[i - 1], left_highest[i - 1]);
        }

        vector<int> right_highest(height.size());
        right_highest[height.size() - 1] = height[height.size() - 1];
        for (int i = height.size() - 2; i >= 0; i--)
        {
            right_highest[i] = max(right_highest[i + 1], height[i + 1]);
        }

        vector<int> water_stored(height.size());
        int min_height;
        for (int i = 0; i < water_stored.size(); i++)
        {
            min_height = min(left_highest[i], right_highest[i]);
            if ((min_height - height[i]) > 0)
            {
                water_stored[i] = min_height - height[i];
            }
            else
            {
                water_stored[i] = 0;
            }
        }
        int amount = 0;
        for (int i = 0; i < height.size(); i++)
        {
            amount += water_stored[i];
            // cout << left_highest[i] << " " << right_highest[i] << " " << water_stored[i] << endl;
        }
        return amount;
    }
};
