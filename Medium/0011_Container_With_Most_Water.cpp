class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1,maxV=INT_MIN;
        while(lp<rp){
            int w=rp-lp,ht=min(height[lp],height[rp]);
            maxV=max(maxV,w*ht);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxV;
    }
};
