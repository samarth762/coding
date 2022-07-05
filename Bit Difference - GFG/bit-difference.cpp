// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string Bits(int aa){
        string result;
        int q=1,w=0;
        while(aa!=1){
            if(aa%2==0){
                result+=w+'0';
            }
            else{
                result+=q+'0';
            }
            aa=aa/2;
        }
        result+=q+'0';
        return result;
    }
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        string str;
        string s1=Bits(a);
        string s2=Bits(b);
        int small=(s1.size()>=s2.size())?s2.size():s1.size();
        string temp=(s1.size()>=s2.size())?s2:s1;
        int count=0;
        for(int i=0;i<small;i++){
            if(s1[i]!=s2[i]){
                count++;
            }
        }
        int large;
        string temp2;
        if(s1.size()!=s2.size()){
            int large=(s1.size()>s2.size())?s1.size():s2.size();
            string temp2=(s1.size()>s2.size())?s1:s2;
            for(int j=small;j<large;j++){
                if(temp2[j]=='1'){
                    count++;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends