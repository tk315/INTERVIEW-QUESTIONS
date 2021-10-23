bool dfs(vector<vector<int>>& grid,vector<vector<int>>& visit,int i,int j)
{
    int n=grid.size();                             
    
    if( i<0 || i>=n || j<0 || j>=n || grid[i][j]==0 || visit[i][j]==1 )return false;
    
    visit[i][j]=1;
    if(grid[i][j]==2)return true;
    
    return (dfs(grid,visit,i-1,j) || 
            dfs(grid,visit,i+1,j) || 
            dfs(grid,visit,i,j-1) || 
            dfs(grid,visit,i,j+1) );
    
}
bool is_Possible(vector<vector<int>>& grid) 
{
    int n=grid.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {
                vector <vector <int>> visit(n,vector <int> (n,0));
                return dfs(grid,visit,i,j);
            }
        }
    }
}