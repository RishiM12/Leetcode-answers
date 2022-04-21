// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        // First we count no. of 1s.
        long count=0;
        for (int i=0;i<n;i++){
            if (a[i]=='1') count++;
        }
        // Now we just need to find how many pairs of 1 we can for.
        // That will be nC2 (Combinatrics)
        // which is equal to n*(n-1)/2
        long ans=count*(count-1)/2;
        return ans;
    }

};

// { Driver Code Starts.

int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        Solution obj;
        cout << obj.binarySubstring(n, a) << endl;
    }
}
  // } Driver Code Ends