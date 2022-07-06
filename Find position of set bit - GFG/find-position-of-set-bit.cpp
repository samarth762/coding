// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0){return -1;}
        int count=0,pos=0;
        while(N!=1){
            if(N%2==0){
                N=N/2;
                pos+=1;
            }
            else if(N%2!=0){
                N=N/2;
                pos+=1;
                count++;
                if(count>1){return -1;}
            }
        }
        if(N==1){
            if(count>1){return -1;}
            pos++;
        }
        return pos;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends