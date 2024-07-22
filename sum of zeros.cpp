int check(vector<vector<int>> &mat,int i,int j)
{
    if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size())
    {
        return 0;
    }

    if(mat[i][j]==0)
    {
        return 0;
    }

    if(mat[i][j]==1)
    {
        return 1;
    }
}
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int sum=0;
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
           if(mat[i][j]==0)
           {
               sum=sum+check(mat,i+1,j)+check(mat,i-1,j)+check(mat,i,j+1)+check(mat,i,j-1);
           }
        }
    }
    return sum;
}