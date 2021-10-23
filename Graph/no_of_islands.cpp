void dfs(vector<vector<char>>& grid, vector <vector <int>> &visit,int i,int j)
{
    int r=grid.size();
    int c=grid[0].size();
    if( i<0 || i>=r || j<0 || j>=c || grid[i][j]=='0' || visit[i][j]==1 )
    {
        return;
    }
    visit[i][j]=1;
    
    dfs(grid,visit,i-1,j-1);
    dfs(grid,visit,i,j-1);
    dfs(grid,visit,i+1,j-1);
    dfs(grid,visit,i-1,j);
    dfs(grid,visit,i+1,j);
    dfs(grid,visit,i-1,j+1);
    dfs(grid,visit,i,j+1);
    dfs(grid,visit,i+1,j+1);
    
}
    
int numIslands(vector<vector<char>>& grid) {
    int r=grid.size();
    int c=grid[0].size();
    
    vector <vector <int>> visit(r,vector <int>(c,0));
    
    int cnt=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(visit[i][j]==0 && grid[i][j]=='1')
            {
                cnt++;
                dfs(grid,visit,i,j);
            }
        }
    }
    return cnt;
}