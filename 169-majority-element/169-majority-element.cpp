class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,val=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>count){
                count=m[nums[i]];
                val=nums[i];
            }
        }
        return val;
    }
};