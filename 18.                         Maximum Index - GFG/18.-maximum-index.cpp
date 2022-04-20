// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int N) 
    { 
        // Your code here
        
        // Creating an array containing the largest elements on right side
        int R[N];
        R[N-1]=arr[N-1];
        for (int i=N-2;i>=0;i--){
            if (R[i+1]>arr[i]) R[i]=R[i+1];
            else R[i]=arr[i];
        }
        
        // Creating an array containing the smallest elements on left side
        int L[N];
        L[0]=arr[0];
        for (int i=1;i<N;i++){
            if (L[i-1]<arr[i]) L[i]=L[i-1];
            else L[i]=arr[i];
        }
        
        //Finding the largest difference between i and j
        int i=0,j=0;
        int diff=-1;
        while (i<N && j<N){
            if (L[i]<=R[j]){
                diff=max(diff,j-i);
                j++;
            }
            else i++;
        }
        return diff;
        
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends