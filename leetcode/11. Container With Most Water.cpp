class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1, water=0;

        while(l<r) {
            int w = r - l, h = min(height[l], height[r]);
            int cur_water = w*h;
            water = max(water, cur_water);
            
            if(height[l] < height[r]) {
                ++l;
            }
            else {
                --r;
            }
        }
        return water;
    }
};