

class Solution {
public:
    int numberOfSubmatrices(std::vector<std::vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<pair<int, int>>> two_d(rows, vector<pair<int, int>>(cols, {0, 0}));
        
        if (grid[0][0] == 'X') {
            two_d[0][0] = {1, 0};
        } else if (grid[0][0] == 'Y') {
            two_d[0][0] = {0, 1};
        }
        
        for (int i = 1; i < cols; i++) {
            if (grid[0][i] == 'X') {
                two_d[0][i] = {two_d[0][i-1].first + 1, two_d[0][i-1].second};
            } else if (grid[0][i] == 'Y') {
                two_d[0][i] = {two_d[0][i-1].first, two_d[0][i-1].second + 1};
            } else {
                two_d[0][i] = two_d[0][i-1];
            }
        }
        
        for (int i = 1; i < rows; i++) {
            if (grid[i][0] == 'X') {
                two_d[i][0] = {two_d[i-1][0].first + 1, two_d[i-1][0].second};
            } else if (grid[i][0] == 'Y') {
                two_d[i][0] = {two_d[i-1][0].first, two_d[i-1][0].second + 1};
            } else {
                two_d[i][0] = two_d[i-1][0];
            }
        }
        
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (grid[i][j] == 'X') {
                    two_d[i][j].first = two_d[i-1][j].first + two_d[i][j-1].first - two_d[i-1][j-1].first + 1;
                    two_d[i][j].second = two_d[i-1][j].second + two_d[i][j-1].second - two_d[i-1][j-1].second;
                } else if (grid[i][j] == 'Y') {
                    two_d[i][j].first = two_d[i-1][j].first + two_d[i][j-1].first - two_d[i-1][j-1].first;
                    two_d[i][j].second = two_d[i-1][j].second + two_d[i][j-1].second - two_d[i-1][j-1].second + 1;
                } else {
                    two_d[i][j].first = two_d[i-1][j].first + two_d[i][j-1].first - two_d[i-1][j-1].first;
                    two_d[i][j].second = two_d[i-1][j].second + two_d[i][j-1].second - two_d[i-1][j-1].second;
                }
            }
        }
        
        int res = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (two_d[i][j].first == two_d[i][j].second && two_d[i][j].first!=0) {
                    res++;
                }
            }
        }
        
        return res;
    }
};
