class Solution {
public:
    //// below approach works in both sorted and not sorted vector.
    int pivotIndex(vector<int>& nums) {
        int right=0,left=0;
        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            right-=nums[i];
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
  
    }
};