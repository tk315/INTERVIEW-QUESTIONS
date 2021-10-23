bool dfs(vector<int> adj[],int visit[],int S,int P)
{
    visit[S]=1;
    
    for(int i=0;i<adj[S].size();i++)
    {
        if(visit[adj[S][i]]==0)
        {
            if(dfs(adj,visit,adj[S][i],S)==true)return true;
        }
        else if(adj[S][i]!=P)
        {
            return true;
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[]) {
    int visit[V]={0};
    
    for(int i=0;i<V;i++)
    {
        if(visit[i]==0)
        {
            bool temp=dfs(adj,visit,i,INT_MAX);
            if(temp==true)return true;
        }
    }
    
    return false;
}