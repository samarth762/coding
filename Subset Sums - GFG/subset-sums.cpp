// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void func(vector<int> &arr,vector<int> &v,int i,int n,int &sum){
        if(i>=n){
            return;
        }
        sum+=arr[i];
        v.push_back(sum);
        func(arr,v,i+1,n,sum);
        sum-=arr[i];
        func(arr,v,i+1,n,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your) Code here
        vector<int> v;
        int i=0,sum=0;
        v.push_back(0);
        func(arr,v,i,N,sum);
        sort(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends