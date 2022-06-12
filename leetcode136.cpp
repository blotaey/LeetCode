int singleNumber(vector<int>& nums) {
    map<int,int> M;

    int n = nums.size();

    for(int i=0; i < n; i++){

        if(M.find(nums[i]) == M.end()) M[nums[i]] = 1;
        else M[nums[i]]++;
    }

    for(int i=0; i < n; i++){
        if(M[nums[i]] == 1){
            return nums[i];
        }
    }


    return -1;
}