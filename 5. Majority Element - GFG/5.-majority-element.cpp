// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


//Moore's Voting Algorithm
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int findCandidate(int a[],int size){
        int maj_index=0;
        int maj=a[maj_index];
        int count=0;
        for (int i=0;i<size;i++){
            if (count==0){
                maj_index=i;
                maj=a[maj_index];
            }
            if (a[i]==maj) count++;
            else count--;
        }
        return maj;
    }
    
    
    int majorityElement(int a[], int size)
    {
        int mid=size/2;
        // your code here
        int maj=findCandidate(a,size);
        int count=0;
        for (int i=0;i<size;i++){
            if (maj==a[i]) count++;
        }
        if (count>mid) return maj;
        return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends