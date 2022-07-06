// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        if(n==1){return;}
        // vector<int> v;
        // for(int i=0;i<n;i++){
        //     v.push_back(a[i]);
        // }
        // int i=0,k=0;
        // while(k<n){
        //     if(v[i]==0){
        //         v.erase(v.begin()+i);
        //         v.insert(v.begin(),0);
        //         i++;
        //     }
        //     else if(v[i]==1){
        //         i++;
        //     }
        //     else if(v[i]==2){
        //         v.erase(v.begin()+i);
        //         v.insert(v.begin()+n-1,2);
        //     }
        //     k++;
        // }
        // for(int i=0;i<n;i++){
        //     a[i]=v[i];
        // }
        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero++;
            }
            else if(a[i]==1){
                one++;
            }
            else if(a[i]==2){
                two++;
            }
        }
        int k=0;
        while(k<n){
            for(int i=0;i<zero;i++){
                a[k++]=0;
            }
            for(int i=0;i<one;i++){
                a[k++]=1;
            }
            for(int i=0;i<two;i++){
                a[k++]=2;
            }
        }
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends