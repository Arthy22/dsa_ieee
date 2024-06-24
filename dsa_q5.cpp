class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int j=height.size()-1;
        int area=0;
        int i=0;
        while(j>=0 && i<height.size()){
            area=(j-i)*min(height[i],height[j]);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
            if(area>max_area){
                max_area=area;
            }
        }
        return max_area;
    }
};
