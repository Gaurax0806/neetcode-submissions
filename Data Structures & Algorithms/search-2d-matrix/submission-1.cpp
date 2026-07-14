class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // step 1 find the row in which element may be found
        int col = matrix[0].size();
        int low = 0;
        int row = matrix.size();
        int high = matrix.size()-1;
        while(high >= low){
            int mid = low + (high - low)/2;
            if(matrix[mid][col-1] >= target){
                row = min(row, mid);
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        if(row == matrix.size()){
            return 0;
        }
        low = 0;
        high = col-1;
        while(high >= low){
            int mid = low + (high - low)/2;
            if (matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] > target){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return false;
    }
};
