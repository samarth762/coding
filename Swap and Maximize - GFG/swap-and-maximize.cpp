// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    long long int val=0;
    sort(arr,arr+n);
    int i=0,j=n-1;
    vector<int> v;
    while(j>i){
        v.push_back(arr[i]);
        v.push_back(arr[j]);
        i++;j--;
    }
    if(i==j){
        v.push_back(arr[i]);
    }
    for(int k=1;k<v.size();k++){
        val+=abs(v[k]-v[k-1]);
    }
    val+=abs(v[0]-v[n-1]);
    return val;
}