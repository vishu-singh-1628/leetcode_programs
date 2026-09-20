int search(int* nums, int numsSize, int target) {
    

        int l = 0, r = numsSize- 1, mid;
        
        while (l <= r) {
           
                mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            // left sorted
            if (nums[l] <= nums[mid]) {
                if (target >= nums[l] && target < nums[mid]) {
                    r = mid - 1;
                } 
            else 
              l=mid+1;
            } 
            else if (target > nums[mid] && target <= nums[r]){
                
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    



}