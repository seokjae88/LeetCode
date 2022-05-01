#include <algorithm>
class Solution {
public:
    void arraySort(int x, int y, int size, vector<vector<int>>& mat, vector<int>& temp) {
        for (int i = 0; i < size; i++) {
            temp[i] = (mat[y + i][x + i]);
        }

        sort(temp.begin(), temp.begin() + size);

        for (int i = 0; i < size; i++) {
            mat[y + i][x + i] = temp[i];
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int xSize = mat[0].size();
        int ySize = mat.size();
        int size = 0;
        
        if (xSize > ySize) {
            size = ySize;
        } else {
            size = xSize;
        }

        vector<int> tempArray(size);
        if (xSize == 1 || ySize == 1) {
            return mat;
        }
        if (xSize > ySize) {
            arraySort(0, 0, ySize, mat, tempArray);
        } else {
            arraySort(0, 0, xSize, mat, tempArray);
        }

        for (int i = 1; i < xSize; i++) {
            arraySort(i, 0, (xSize - i) < ySize ? (xSize - i) : ySize, mat, tempArray);
        }
        for (int i = 1; i < ySize; i++) {
            arraySort(0, i, (ySize - i) < xSize ? (ySize - i) : xSize, mat, tempArray);
        }
        return mat;
    }
};
