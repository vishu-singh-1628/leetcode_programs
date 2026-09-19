int maxArea(int* height, int heightSize) {
    int maxwater=0;

    int lp=0,rp=heightSize-1;
    while(lp<rp){
        int w=rp-lp;
        int ht=(height[lp]<height[rp])?height[lp]:height[rp];
        int curwater=w*ht;
        maxwater=(maxwater>curwater)?maxwater:curwater;
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    return maxwater;
    
}