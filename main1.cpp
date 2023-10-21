
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int i,j;
        for(i=0;i<nums.size()-1;i++)
            for(j=i+1;j<nums.size();j++)
                if(nums[i]+nums[j]==target){
                    sum.push_back(i);
                    sum.push_back(j);
                }
        return sum;
    }
};