class Solution {
public:
    bool cmp1(const vector<int> &a,const vector<int> &b){
        return a[0]<b[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0],end1=intervals[0][1];
        vector<vector<int>> vec;
        for(int j=1;j<intervals.size();j++){
            if(intervals[j][0]>end1){
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end1);
                vec.push_back(temp);
                start=intervals[j][0];
                end1=intervals[j][1];
            }
            else if(intervals[j][0]<=end1){
                if(end1<intervals[j][1]){
                    end1=intervals[j][1];
                }
            }
        }
        vector<int> temp;
        temp.push_back(start);
        temp.push_back(end1);
        vec.push_back(temp);
        return vec;
    }
};