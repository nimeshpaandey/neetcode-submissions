class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int cap = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            int l = min(heights[i], heights[j]);
            int b = j - i;
            cap = max(cap, l * b);
            if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return cap;
    }
};
