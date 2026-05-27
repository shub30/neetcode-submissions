class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int l = 0, r = height.size() - 1;
        int max_area = 0;
        while(l < r)
        {
            int dist = (r - l);
            int area = min(height[l], height[r]) * dist;

            max_area = max(max_area, area);
            if(height[l] < height[r])
                l++;
            else if(height[l] >= height[r])
                r--;
        }
        return max_area;
    }
};
