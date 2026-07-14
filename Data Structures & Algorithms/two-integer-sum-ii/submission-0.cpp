class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if (numbers[i]+numbers[j]==target){
                vector<int> index1;
                index1.push_back(i+1);
                index1.push_back(j+1);
                return index1;
            }
            if (numbers[i]+numbers[j]>target){
                j--;
            }
            if (numbers[i]+numbers[j]<target){
                i++;
            }
        }
        vector<int> v;
        return v;
    }
};
