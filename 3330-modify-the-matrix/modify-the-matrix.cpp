class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        
        for(int i= 0 ; i<matrix.size();i++)
        {
            int maxx = -1;
            for(int j =0 ; j<matrix[0].size();j++)
            {
                int maxx = -1;
                if(matrix[i][j]==-1 && maxx == -1)
                {
                    for(int m =0 ; m<matrix.size();m++)
                    {
                        maxx = max(maxx,matrix[m][j]);
                    }
                    
                    matrix[i][j] = maxx;
                }
                
                else if(matrix[i][j] == -1)
                {
                    matrix[i][j] = maxx;
                }
            }
        }
                return matrix;
    }
};