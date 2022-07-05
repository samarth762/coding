// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int val=1;
    	int n1=sizeof(a)/sizeof(a[0]);
    	for(int i=0;i<n;i++){
    	    string str=to_string(a[i]);
    	
    	    int k=0,j=str.size()-1;
    	    while(k<j){
    	        if(str[k]!=str[j]){
    	            return 0;
    	        }
    	        k++;
    	        j--;
    	    }
    	}
    	return val;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends