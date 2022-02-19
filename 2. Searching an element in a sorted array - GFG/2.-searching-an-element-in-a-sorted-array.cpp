// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    
    
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int start=0;
       int end=N-1;
       int mid=0;
       while(start<=end){
           mid=(start+end)/2;
           if (arr[mid]==K) return 1;
           if (K>arr[mid]) start=mid+1;
           if (K<arr[mid]) end=mid-1;
       }
       return -1;
       
    }
};

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends