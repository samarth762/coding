class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/2;
        int val=nums[n];
        int ss=0;
        for(int i=0;i<nums.size();i++){
            ss+=abs(val-nums[i]);
        }
        return ss;
    }
};