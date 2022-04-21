// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        // Finding the largest element to the left of current index
        int largest_left[n];
        largest_left[0]=arr[0];
        for (int i=1;i<n-1;i++){
            largest_left[i]=max(arr[i],largest_left[i-1]);
        }
        // Similarly finding the largest element to the right of current index
        int largest_right[n];
        largest_right[n-1]=arr[n-1];
        for (int i=n-2;i>0;i--){
            largest_right[i]=max(largest_right[i+1],arr[i]);
        }
        
        long long trapped=0;
        for (int i=1;i<n-1;i++){
            trapped+=min(largest_left[i],largest_right[i])-arr[i];
        }
        return trapped;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends