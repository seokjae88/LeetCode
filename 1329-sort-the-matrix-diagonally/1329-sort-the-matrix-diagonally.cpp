class Solution {
public:
    void insertSort(vector<vector<int>>& mat, int x, int y) {
        int xSize = mat[0].size();
        int ySize = mat.size();

        int i = 1;
        while (xSize > (x + i) && ySize > (y + i)) {
            int key = mat[y + i][x + i];
            
            int j = (i-1);
            while (j >= 0 && key < mat[y + j][x + j]) {
                mat[y + (j + 1)][x + (j + 1)] = mat[y + j][x + j];
                j--;
            }
            mat[y + (j + 1)][x + (j + 1)] = key;
            i++;
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for (int i = 0; i < mat[0].size(); i++) {
            insertSort(mat, i, 0);
        }
        for (int i = 1; i < mat.size(); i++) {
            insertSort(mat, 0, i);
        }
        return mat;
    }
};