class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int prevColor = image[sr][sc];
        if(prevColor == newColor){
            return image;
        }
        floodFillUtil(image, sr, sc, prevColor, newColor);
        return image;
    }
    void floodFillUtil(vector<vector<int>>& image, int x, int y, int prevC, int newC) {
        int m = image.size(), n = image[0].size();

        if (x < 0 || x >= m || y < 0 || y >= n)
            return;
        if (image[x][y] != prevC)
            return;
        if (image[x][y] == newC)
            return;

        image[x][y] = newC;

        floodFillUtil(image, x+1, y, prevC, newC);
        floodFillUtil(image, x-1, y, prevC, newC);
        floodFillUtil(image, x, y+1, prevC, newC);
        floodFillUtil(image, x, y-1, prevC, newC);
    }
};