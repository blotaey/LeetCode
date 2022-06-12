int findKthLargest(vector<int>& nums, int k) {
    
    sort(nums.rbegin(), nums.rend());

    k -= 1;

    int n = nums.size();

    for(int i=0; i < n; i++){
        if(i==k){
            return nums[i];
        } 
    }

    return -1;
}