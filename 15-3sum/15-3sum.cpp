class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3){
            return result;
        }
        sort(nums.begin(),nums.end());
        set<vector<int>> v1;
        int n=nums.size();
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int val=0-(nums[i]);
                int j=i+1,k=n-1;
                while(k>j){
                    if((nums[j]+nums[k])<val){
                        j++;
                    }
                    else if((nums[j]+nums[k])>val){
                        k--;
                    }
                    else if((nums[j]+nums[k])==val){
                        vector<int> vec;
                        vec.push_back(nums[j]);
                        vec.push_back(nums[k]);
                        vec.push_back(nums[i]);
                        result.push_back(vec);
                        while(j<k && nums[j]==nums[j+1]){
                            j++;
                        }
                        j++;
                        while(j<k && nums[k]==nums[k-1]){
                            k--;
                        }
                        k--;
                    }
                }
            }
        }
        return result;
    }
};