class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(10, vector<int>(10,0));
        vector<vector<int>> cols(10, vector<int>(10,0));
        vector<vector<int>> square(10,vector<int>(10,0));
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] != '.'){
                    rows[row][board[row][col] - '0']++;
                    cols[col][board[row][col] - '0']++;
                    square[(row/3)*3 + (col)/3][board[row][col] - '0']++;
                    if(rows[row][board[row][col] - '0'] > 1 || cols[col][board[row][col] - '0'] > 1 || square[(row/3)*3 + (col)/3][board[row][col] - '0'] > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
