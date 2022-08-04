class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0){return 0;}
        int val=1,cnt=1,value=nums[0];
        for(int i=1;i<n;i++){
            if(value+1==nums[i]){
                cnt++;
                value=nums[i];
            }
            else if(value==nums[i]){
                value=nums[i];
            }
            else{
                cnt=1;
                value=nums[i];
            }
            val=max(val,cnt);
        }
        return val;
    }
};