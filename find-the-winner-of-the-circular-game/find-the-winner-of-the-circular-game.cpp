class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
        for (int i=1;i<n+1;i++){
            v.push_back(i);
        }
        
        
        int pos=0;
        while (v.size()!=1) {
            pos=pos+k-1;
            cout<<pos<<endl;
            
            while (pos>=v.size()){
                pos=pos-v.size();
                //v.erase(v.begin()+pos+1);
            } 
            v.erase(v.begin()+pos);
        }
        return v[0];
    }
};