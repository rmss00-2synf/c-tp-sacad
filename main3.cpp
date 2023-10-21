
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> nums_map;
        for(auto num : nums)
            nums_map[num]++;
        for(auto maP : nums_map)
            if(maP.second == 1)
             return maP.first;
        exit(1);
    }
};