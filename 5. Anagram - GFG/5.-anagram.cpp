// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    // unordered_map<char,int> m;
    //     // Your code here
    //     for (int i=0;i<a.length();i++){
    //         if (m.count(a[i])){
    //             m[a[i]]=m[a[i]]+1;
    //             continue;
    //         }
    //         m[a[i]]=1;
    //     }
        
    //     unordered_map<char,int> m2;
        
    //     for (int i=0;i<b.length();i++){
    //         if (m2.count(b[i])){
    //             m2[b[i]]=m2[b[i]]+1;
    //             continue;
    //         }
    //         m2[b[i]]=1;
    //     }
        
    //     //bool anagram=true;
    //     for (int i=0;i<b.length();i++){
    //         if(m[b[i]]!=m2[b[i]]) return false;
    //     }
    //     return true;
    
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int c[26]={0};
        int d[26]={0};
        for (int i=0;i<a.length();i++){
            int x=int(a[i]);
            if (x>=97 && x<=122) c[x-97]+=1;
            if (x>=65 && x<=90) c[x-65]+=1;
        }
        for (int i=0;i<b.length();i++){
            int x=int(b[i]);
            if (x>=97 && x<=122) d[x-97]+=1;
            if (x>=65 && x<=90) d[x-65]+=1;
        }
        
        for (int i=0;i<26;i++){
            if (c[i]!=d[i]) return false; 
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