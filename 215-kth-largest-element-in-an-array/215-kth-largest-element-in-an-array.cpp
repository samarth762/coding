class Solution {
public:
    
    int findKthLargest(vector<int>& nums, int k){
        int n=nums.size();
        multiset<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int n1=s.size()-k;
        int p=0;
        for(auto i:s){
            if(p==n1){
                return i;
            }
            p++;
        }
        return -1;
    }
};