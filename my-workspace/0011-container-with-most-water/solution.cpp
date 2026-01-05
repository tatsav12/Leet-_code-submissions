class Solution {
public:
    int maxArea(vector<int>& height) {
       int lp=0,rp = height.size()-1,mW = 0;
       while(lp < rp){
        int wi = rp - lp;
        int ht = min(height[lp],height[rp]);
        int cW = ht*wi;
        mW = max(mW,cW);
        if(height[lp]<height[rp]){
            lp++;
        }else{
            rp--;
        }
       } 
       return mW;
    }
};
