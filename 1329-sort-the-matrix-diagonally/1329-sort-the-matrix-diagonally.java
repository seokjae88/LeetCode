import java.util.Arrays;

class Solution {
    public void arraySort(int x, int y, int size, int[][] mat) {
        int[] tempArray = new int[size];
        for (int i = 0; i < size; i++) {
            tempArray[i] = mat[y + i][x + i];
        }

        Arrays.sort(tempArray);

        for (int i = 0; i < size; i++) {
            mat[y + i][x + i] = tempArray[i];
        }
    }
    public int[][] diagonalSort(int[][] mat) {
        int xSize = mat[0].length;
        int ySize = mat.length;

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
}