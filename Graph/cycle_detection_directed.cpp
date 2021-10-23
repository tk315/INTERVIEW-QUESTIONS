bool dfs(vector<int> adj[],int V,int S,int visit[],int recst[])
{
    visit[S]=1;
    recst[S]=1;
    for(int i=0;i<adj[S].size();i++)
    {
        if(visit[adj[S][i]]==0)
        {
            if(dfs(adj,V,adj[S][i],visit,recst)==true)return true;
        }
        else if(recst[adj[S][i]]==1)
        {
            return true;
        }
    }
    recst[S]=0;
    return false;
}
    
bool isCyclic(int V, vector<int> adj[]) 
{
    int visit[V]={0};
    int recst[V]={0};

    for(int i=0;i<V;i++)
    {
  
        if(dfs(adj,V,i,visit,recst)==true)return true;
    }
    return false;
}