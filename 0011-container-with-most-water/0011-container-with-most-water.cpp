class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
            int l=0;
            int r=height.size()-1;
        while(l<r){
           // int marea=(r - 1)*min(height[l],height[r]);
            int marea = (r - l) * min(height[l], height[r]);
            area=max(area,marea);
            if(height[l] < height[r])
            l++;
            else r--;


        }return area;
        }

        
    
};