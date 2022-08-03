class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,count=0,val=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(val<sum){
                val=sum;
                if(sum<0){
                    sum=0;
                }
            }
            else{
                if(sum<0){
                    sum=0;
                }
            }
        }
        return val;
    }
};