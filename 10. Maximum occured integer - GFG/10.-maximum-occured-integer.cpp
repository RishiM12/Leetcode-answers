// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        
        // Watch video for proper solution
        // Prefix sum part 2
        vector<int> temp(maxx+1000);
        for (int i=0;i<n;i++){
            // Add 1 where range is starting        
            temp[L[i]]++;
            // Add -1 after index where range is ending
            temp[R[i]+1]--;
        }
        
        int max=temp[0];
        int max_index=0;
        // Find prefix sum array
        for (int i=1;i<maxx+1000;i++){
            temp[i]=temp[i]+temp[i-1];
            if (temp[i]>max){
             max=temp[i];
             max_index=i;
            } 
        }
        return max_index;
        
        
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n;
	    
	    //taking size of array
	    cin >> n;
	    int L[n];
	    int R[n];
	    
	    //adding elements to array L
	    for(int i = 0;i<n;i++){
	        cin >> L[i];
	    }
	    
	    int maxx = 0;
	    
	    //adding elements to array R
	    for(int i = 0;i<n;i++){
	        
	        cin >> R[i];
	        if(R[i] > maxx){
	            maxx = R[i];
	        }
	    }
	    Solution ob;
	    
	    //calling maxOccured() function
	    cout << ob.maxOccured(L, R, n, maxx) << endl;
	}
	
	return 0;
}  // } Driver Code Ends