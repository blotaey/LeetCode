#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for(int count = 0; count < nums.size(); count++){
            for(int j = count+1; j < nums.size(); j++){
                if(nums[count] + nums[j] == target){
                    result.push_back(count);
                    result.push_back(j);

                    return result;
                }
            }
        }
        return result;
    }
};



