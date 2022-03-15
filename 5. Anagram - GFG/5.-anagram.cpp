// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        unordered_map<char,int> m;
        // Your code here
        for (int i=0;i<a.length();i++){
            if (m.count(a[i])){
                m[a[i]]=m[a[i]]+1;
                continue;
            }
            m[a[i]]=1;
        }
        
        unordered_map<char,int> m2;
        
        for (int i=0;i<b.length();i++){
            if (m2.count(b[i])){
                m2[b[i]]=m2[b[i]]+1;
                continue;
            }
            m2[b[i]]=1;
        }
        
        //bool anagram=true;
        for (int i=0;i<b.length();i++){
            if(m[b[i]]!=m2[b[i]]) return false;
        }
        return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends