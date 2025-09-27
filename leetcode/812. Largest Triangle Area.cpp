class Solution {
public:
    /*
        Shoelace formula
        s=0.5*|x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)|
    */
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double ans = 0;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                for(int k=j+1; k<n; ++k){
                    double area=0.5*abs(points[i][0]*(points[j][1]-points[k][1])+points[j][0]*(points[k][1]-points[i][1])+points[k][0]*(points[i][1]-points[j][1]));
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};
