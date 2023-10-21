
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2) return false;
        int i, j;
        for(i=0;i<nums.size()-1;i++)
            for(j = i+1; j<nums.size();j++)
                if(nums[i]==nums[j]) return true;
        return false;
    }
};