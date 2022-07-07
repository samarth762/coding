// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<ll,int> m1;
        for(int i=0;i<N;i++){
            m1[A[i]]++;
        }
        for(int i=0;i<N;i++){
            if(m1.find(B[i])!=m1.end()){
                m1[B[i]]--;
                if(m1[B[i]]==0){
                    m1.erase(B[i]);
                }
            }
            else{
                // cout<<"go";
                return false;
            }
        }
        if(!m1.empty()){
            // cout<<"go1";
            return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends