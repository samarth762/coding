// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} // } Driver Code Ends



void Rearrange(int arr[], int n)
{
    // Your code goes here
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        
        }
        else if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
    }
    int k=0;
    for(int i=0;i<neg.size();i++){
        arr[k++]=neg[i];
    }
    for(int j=0;j<pos.size();j++){
        arr[k++]=pos[j];
    }
}