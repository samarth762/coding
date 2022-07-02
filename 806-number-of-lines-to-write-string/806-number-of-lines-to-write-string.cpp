class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int val=0;
        int count=1;
        for(int i=0;i<s.size();i++){
            int k=s[i]-'a';
            int temp=widths[k];
            if(val+temp<=100){
                val+=temp;
            }
            else if(val+temp>100){
                val=temp;
                count++;
            }
        }
        vector<int> result{count,val};
        return result;
    }
};