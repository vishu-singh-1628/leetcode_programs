/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int* arr = malloc(2*sizeof(int));
    arr[0]=-1;
    arr[1]=-1;
    *returnSize=2;
    int l = 0, r = numsSize - 1;
//    loop for first index
    while (l <= r) {
       int mid = l + (r - l) / 2;
       if(nums[mid]>=target){
        if (nums[mid]==target){
            arr[0]=mid;
        }
            r=mid-1;}
        else{
            l=mid+1;
        }
    }
//    loop for last index
 l = 0, r = numsSize - 1;
    while (l <= r) {
       int mid = l + (r - l) / 2;
       if(nums[mid]<=target){
        if (nums[mid]==target){
            arr[1]=mid;
        }
            l=mid+1;}
        else{
            r=mid-1;
        }  
    }
    return arr;


}