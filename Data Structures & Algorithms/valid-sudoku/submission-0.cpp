class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int>rw[9];
        unordered_set<int>cl[9];
        unordered_set<int>bx[9];

        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.') continue;
                int bxidx=(r/3)*3+c/3;
                if  (rw[r].count(board[r][c]) || 
                cl[c].count(board[r][c]) || bx[bxidx].count(board[r][c])) {
                    return false;
                } 
                rw[r].insert(board[r][c]);
                cl[c].insert(board[r][c]);
                bx[bxidx].insert(board[r][c]);
            }
        }
        return true;
    }
};
