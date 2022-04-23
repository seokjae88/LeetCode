#include <algorithm>
class Solution {
public:
    void arraySort(int x, int y, int size, vector<vector<int>>& mat) {
        vector<int> tempArray;
        for (int i = 0; i < size; i++) {
            tempArray.push_back(mat[y + i][x + i]);
        }

        sort(tempArray.begin(), tempArray.end());

        for (int i = 0; i < size; i++) {
            mat[y + i][x + i] = tempArray[i];
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int xSize = mat[0].size();
        int ySize = mat.size();

        if (xSize == 1 || ySize == 1) {
            return mat;
        }
        if (xSize > ySize) {
            arraySort(0, 0, ySize, mat);
        } else {
            arraySort(0, 0, xSize, mat);
        }

        for (int i = 1; i < xSize; i++) {
            arraySort(i, 0, (xSize - i) < ySize ? (xSize - i) : ySize, mat);
        }
        for (int i = 1; i < ySize; i++) {
            arraySort(0, i, (ySize - i) < xSize ? (ySize - i) : xSize, mat);
        }
        return mat;
    }
};