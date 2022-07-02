class Solution {
public:
    vector<int> getRow(int rowIndex) {
          if(rowIndex==0)
            return {1};
        if(rowIndex==1)
            return {1,1};
        
        int i;
        vector<int> prev={1,1};
        for(i=2; i<=rowIndex; i++)
        {
            vector<int> curr;
            curr.push_back(1);
            int j;
            
            for(j=0; j<prev.size()-1; j++)
            {
                curr.push_back(prev[j]+prev[j+1]);
            }
            curr.push_back(1);
            prev=curr;
        }
        return prev;
    }
};