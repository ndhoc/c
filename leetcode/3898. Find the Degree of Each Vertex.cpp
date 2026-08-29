class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> degree;

        for(int i=0; i<matrix.size(); ++i) {
            int edge = 0;

            for(int j=0; j<matrix[i].size(); ++j) {
                edge += matrix[i][j];
            }

            degree.push_back(edge);
        }
        return degree;
    }
};