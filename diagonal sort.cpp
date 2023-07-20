class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {


        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
          int row_size=mat.size();
          int col_size=mat[0].size();

    for(int row=0;row<col_size;row++)
    {
        vector<int> temp;
        for(int i=0,j=row;i<row_size&&j<col_size;i++,j++)
        {
            temp.push_back(mat[i][j]);
        }
        sort(temp.begin(),temp.end());
         for(int i=0,j=row;i<row_size&&j<col_size;i++,j++)
        {
            mat[i][j]=temp[i];
        }
    }




     for(int col=1;col<row_size;col++)
    {
        vector<int> temp;
        for(int i=col,j=0;i<row_size&&j<col_size;i++,j++)
        {
            temp.push_back(mat[i][j]);
        }
        sort(temp.begin(),temp.end());
         for(int i=col,j=0;i<row_size&&j<col_size;i++,j++)
        {
            mat[i][j]=temp[j];
        }
    }
      return mat;  
    }
};