class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int least_no=1;
        for(int n:nums){
            if(n<=0){continue;}
            if(least_no==n){
                least_no++;
                continue;
            }
            if(n>least_no){
                continue;
            }
        }
        return least_no;
    }
};