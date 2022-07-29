class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m,m2;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        vector<int> v1;
        int i=v.size()-1;
        int n=v.size();
        while(i>=n-k){
            cout<<v[i].second;
            v1.push_back(v[i].second);
            i--;
            // if(i==v.size()-k-1){break;}
        }
        return v1;
    }
};