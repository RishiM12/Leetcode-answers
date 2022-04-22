// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        //sort the array
        sort(arr,arr+n);

        // finding pairs for each arr[i]
        for (int i=0;i<n-1;i++){
        // take two pointers l and r 
            // taking i+1 as we don't want to repeat the same element in the sum
            // also every previous triplet will be considered automatically
          int l=i+1;
          int r=n-1;  
          // run loop until left pointer is less than right pointer as it covers all possible pairs
            while (l<r){
            // if sum is 0 then triplet exists
            if (arr[l]+arr[r]+arr[i]==0) return true;
            // if sum is less than 0 then move left pointer forward
            else if (arr[l]+arr[r]+arr[i]<0) l++;
            // if sum is more than 0 then move left pointer backward
            else r--;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends