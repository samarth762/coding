class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> result;
        for(auto i:m){
            int n=i.second;
            for(int j=0;j<n;j++){
                result.push_back(i.first);
            }
        }
        nums=result;
    }
};