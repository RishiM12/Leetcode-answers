class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for (int i=0;i<queries.size();i++){
            int count=0;
            for (int k=0;k<points.size();k++){
                double dist=pow((queries[i][0]-points[k][0]),2)+pow((queries[i][1]-points[k][1]),2);
                double r=pow(dist,0.5);
                if (r<=queries[i][2]) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};