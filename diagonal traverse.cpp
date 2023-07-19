class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& arr) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 

          vector<int> ans;
    
    int row_size=arr.size();
    int col_size=arr[0].size();
    
   // cout<<row_size<<col_size;
    int counter=0;
    for(int col=0;col<col_size;col++)
    {
        
        vector<int> temp;
        for(int i=0,j=col;i<row_size&&j>=0;i++,j--)
        {
            temp.push_back(arr[i][j]);
        }
        if(counter%2==0)
        {
            reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        else{
        ans.insert(ans.end(),temp.begin(),temp.end());
        }
        counter++;
    }
    
    for(int row=1;row<row_size;row++)
    {
        vector<int> temp;
        for(int i=row,j=col_size-1;i<row_size&&j>=0;i++,j--)
        {
            temp.push_back(arr[i][j]);
        }
        if(counter%2==0)
        {
            reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        else{
        ans.insert(ans.end(),temp.begin(),temp.end());
        }
        counter++;
       
    }
      return ans;  
    }
};