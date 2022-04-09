class Solution {
public:
    void insertSort(vector<vector<int>>& mat, int x, int y) {
        int xSize = mat[0].size();
        int ySize = mat.size();

        int i = 1;
        while (xSize > (x + i) && ySize > (y + i)) {
            int xKey = x + i;
            int yKey = y + i;
            int key = mat[yKey][xKey];
            
            int j = i;
            while (j > 0 && key < mat[yKey - j][xKey - j]) {
                swap(mat[yKey - j][xKey - j], mat[yKey][xKey]);
                j--;
            }
            i++;
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                insertSort(mat, j, i);
            }
        }
        return mat;
    }
};