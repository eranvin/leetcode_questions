class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int temp;
        int row,col,swap;
        int cur_row, cur_col;
        for (row = 0; row < n/2 ; row++){
            for (col = row; col < (n -row); col ++ ){
                cur_row = row;
                cur_col = col;
                for(swap = 0; swap < 4; swap ++){
                    temp = matrix[cur_row][cur_col];
                    matrix[cur_row][cur_col] =  matrix[cur_col][n - cur_col];
                    cur_row = cur_col;
                    cur_col = n - cur_col;
                }//swap
            }//col
        }//row

        return;
    }
};
