class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        int val=0;
        for(int i=0;i<nums.size();i++){
            val+=nums[i];
            vec.push_back(val);
        }
        return vec;
    }
};